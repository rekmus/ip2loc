#include "Cvisits.h"
#include "Cip2location_db3.h"


void visits(int ci)
{
    try
    {
static Cvisits v;

        strcpy(v.ip, conn[ci].ip);
        strcpy(v.method, conn[ci].method);
        COPY(v.uri, conn[ci].uri, 250);
        COPY(v.referer, conn[ci].referer, 250);
        COPY(v.uagent, conn[ci].uagent, 250);
        strcpy(v.lang, conn[ci].lang);

        /* location */

        unsigned ip_dec_net;    /* IP as decimal in network byte order */

#ifdef _WIN32   /* Windows */
        if ( (ip_dec_net=inet_addr(conn[ci].ip)) < 1 )
#else
        if ( inet_pton(AF_INET, conn[ci].ip, &ip_dec_net) != 1 )
#endif
        {
            WAR("Couldn't convert IP string [%s] to decimal", conn[ci].ip);

            v.country_code[0] = EOS;
            v.region_name[0] = EOS;
            v.city_name[0] = EOS;
        }
        else
        {
            unsigned ip_dec;    /* IP as decimal in host byte order */

            ip_dec = ntohl(ip_dec_net);

            INF("ip_dec = %u", ip_dec);

static Cip2location_db3 l;
static bool first=true;

            if ( first )
            {
                l.PrepareCursor("ip_from<=? AND ip_to>=?");
                first = false;
            }

            l.OpenCursor(ip_dec, ip_dec);

            if ( l.Fetch() )
            {
                strcpy(v.country_code, l.country_code);
                strcpy(v.region_name, l.region_name);
                strcpy(v.city_name, l.city_name);
            }
            else
            {
                WAR("No such range in ip2location_db3");

                v.country_code[0] = EOS;
                v.region_name[0] = EOS;
                v.city_name[0] = EOS;
            }
        }

        /* UA type */

        if ( REQ_DSK )
            v.ua_type = 'D';
        else
            v.ua_type = 'M';

        /* bot */

        if ( conn[ci].bot )
            v.bot = 'Y';
        else
            v.bot = 'N';

        /* ad */

        if ( !REQ("visits") && strstr(conn[ci].uri, "gclid=") && 0==strcmp(v.country_code, "PL") )
            v.ad = 'G';
        else if ( !REQ("visits") && strstr(conn[ci].uri, "fbclid=") && 0==strcmp(v.country_code, "PL") )
            v.ad = 'F';
        else
            v.ad = EOS;

        v.session_id = G_usi;
        v.status = conn[ci].status;

//        v.processing = lib_elapsed(&conn[ci].proc_start);

        strcpy(v.created, DT_NOW);

        v.Insert();

        if ( v.ad == 'G' )   /* wyślij email jeśli klik z reklamy */
        {
            str2k m;
            sprintf(m, "%s\n\n%s %s %s\n", conn[ci].ip, v.country_code, v.region_name, v.city_name);

            silgy_email("holtermed.pl@gmail.com", "Klik z reklamy", m);
        }
    }
    catch (std::exception& e)
    {
        ERR(e.what());
    }
}
