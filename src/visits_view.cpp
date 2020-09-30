/* ---------------------------------------------------------------------------
   Silgy View
   Generated on silgy.org on 2020-05-30 11:25:59, generator v.1.0.0
--------------------------------------------------------------------------- */


#include "silgy.h"
#include "visits_view.h"


/* ---------------------------------------------------------------------------
   Set the row style
--------------------------------------------------------------------------- */
static char *trstyle(int i)
{
static char trstyle[256];

    if ( i%2 )
        sprintf(trstyle, " class=\"%s\"", VIEW_ODD_ROW_CLASS);
    else
//        trstyle[0] = EOS;
        sprintf(trstyle, " class=\"%s\"", VIEW_EVEN_ROW_CLASS);

    return trstyle;
}


#ifdef VIEW_VISITS_ENUM_UA_TYPE_01_VAL   /* combo box instead of input */

/* ---------------------------------------------------------------------------
   Return enum description
--------------------------------------------------------------------------- */
static char *ua_type(int ci, char val)
{
static char description[256];

    if ( val == VIEW_VISITS_ENUM_UA_TYPE_01_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_01_DESC));
#ifdef VIEW_VISITS_ENUM_UA_TYPE_02_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_02_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_03_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_03_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_04_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_04_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_05_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_05_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_06_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_06_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_07_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_07_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_08_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_08_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_09_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_09_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_10_VAL
    else if ( val == VIEW_VISITS_ENUM_UA_TYPE_10_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_UA_TYPE_10_DESC));
#endif
    else if ( val == 0 )
        strcpy(description, STR("No value"));
    else
        sprintf(description, "%s (%c)", STR("Unknown value"), val);

    return description;
}

#endif  /* VIEW_VISITS_ENUM_UA_TYPE_01_VAL */


#ifdef VIEW_VISITS_ENUM_BOT_01_VAL   /* combo box instead of input */

/* ---------------------------------------------------------------------------
   Return enum description
--------------------------------------------------------------------------- */
static char *bot(int ci, char val)
{
static char description[256];

    if ( val == VIEW_VISITS_ENUM_BOT_01_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_01_DESC));
#ifdef VIEW_VISITS_ENUM_BOT_02_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_02_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_03_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_03_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_04_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_04_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_05_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_05_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_06_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_06_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_07_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_07_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_08_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_08_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_09_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_09_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_10_VAL
    else if ( val == VIEW_VISITS_ENUM_BOT_10_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_BOT_10_DESC));
#endif
    else if ( val == 0 )
        strcpy(description, STR("No value"));
    else
        sprintf(description, "%s (%c)", STR("Unknown value"), val);

    return description;
}

#endif  /* VIEW_VISITS_ENUM_BOT_01_VAL */


#ifdef VIEW_VISITS_ENUM_AD_01_VAL   /* combo box instead of input */

/* ---------------------------------------------------------------------------
   Return enum description
--------------------------------------------------------------------------- */
static char *ad(int ci, char val)
{
static char description[256];

    if ( val == VIEW_VISITS_ENUM_AD_01_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_01_DESC));
#ifdef VIEW_VISITS_ENUM_AD_02_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_02_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_03_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_03_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_04_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_04_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_05_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_05_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_06_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_06_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_07_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_07_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_08_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_08_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_09_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_09_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_10_VAL
    else if ( val == VIEW_VISITS_ENUM_AD_10_VAL )
        strcpy(description, STR(VIEW_VISITS_ENUM_AD_10_DESC));
#endif
    else if ( val == 0 )
        strcpy(description, STR("No value"));
    else
        sprintf(description, "%s (%c)", STR("Unknown value"), val);

    return description;
}

#endif  /* VIEW_VISITS_ENUM_AD_01_VAL */




/* ---------------------------------------------------------------------------
   Get id from URI
--------------------------------------------------------------------------- */
static bool get_id_from_uri(int ci, Cvisits& rec)
{
    if ( !ID[0] )
        return false;

    char upper_id[MAX_RESOURCE_LEN+1];
    COPY(upper_id, upper(ID), MAX_RESOURCE_LEN);

    if ( 0==strcmp(upper_id, "VISITS") )
        return false;

    rec.id = atoi(ID);

    return true;
}


/* ---------------------------------------------------------------------------
   Get key
--------------------------------------------------------------------------- */
static bool get_key(int ci, Cvisits& rec, bool arg=false)
{
    QSVAL id_str;
    if ( !QS(arg?"arg_id":"id", id_str) ) return false;

    rec.id = atoi(id_str);

    return true;
}


/* ---------------------------------------------------------------------------
   Get record from payload
--------------------------------------------------------------------------- */
static int get_rec(int ci, Cvisits& rec)
{
    if ( !REQ_DATA )   /* not allowed via GET */
        return ERR_INVALID_REQUEST;

    QSI("id", &rec.id);

    QSVAL ip;
    if ( QS("ip", ip) )
        COPY(rec.ip, ip, 60);

    QSVAL country_code;
    if ( QS("country_code", country_code) )
        COPY(rec.country_code, country_code, 2);

    QSVAL region_name;
    if ( QS("region_name", region_name) )
        COPY(rec.region_name, region_name, 128);

    QSVAL city_name;
    if ( QS("city_name", city_name) )
        COPY(rec.city_name, city_name, 128);

    QSVAL method;
    if ( QS("method", method) )
        COPY(rec.method, method, 15);

    QSVAL uri;
    if ( QS("uri", uri) )
        COPY(rec.uri, uri, 250);

    QSVAL referer;
    if ( QS("referer", referer) )
        COPY(rec.referer, referer, 250);

    QSVAL uagent;
    if ( QS("uagent", uagent) )
        COPY(rec.uagent, uagent, 250);

    QSVAL lang;
    if ( QS("lang", lang) )
        COPY(rec.lang, lang, 5);

    QSVAL ua_type;
    if ( QS("ua_type", ua_type) )
        rec.ua_type = ua_type[0];

    QSVAL bot;
    if ( QS("bot", bot) )
        rec.bot = bot[0];

    QSVAL ad;
    if ( QS("ad", ad) )
        rec.ad = ad[0];

    QSI("session_id", &rec.session_id);

    QSVAL status_str;
    if ( QS("status", status_str) )
    {
        int tmp = atoi(status_str);
        if ( tmp > -32768 && tmp < 32768 )
            rec.status = tmp;
        else
            WAR("Value %d is too large for SMALLINT", tmp);
    }

    QSF("processing", &rec.processing);

    QSVAL created;
    if ( QS("created", created) )
        COPY(rec.created, created, 19);

    return OK;
}


/* ---------------------------------------------------------------------------
   Output table row
--------------------------------------------------------------------------- */
static void output_row(int ci, Cvisits& rec, int i)
{
    char details_lnk[256]="";
    char edit_lnk[256]="";
    char remove_lnk[256]="";

    OUT("<tr%s>", trstyle(i));

    if ( REQ_DSK )
    {
#ifdef VIEW_VISITS_LIST_DSK_BEFORE_COLUMNS
        VIEW_VISITS_LIST_DSK_BEFORE_COLUMNS;
#endif

#ifndef VIEW_VISITS_LIST_DSK_HIDE_ID
        OUT("<td class=r>%d</td>", rec.id);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_IP
        OUT("<td>%s</td>", rec.ip);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_COUNTRY_CODE
        OUT("<td>%s</td>", rec.country_code);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_REGION_NAME
        OUT("<td>%s</td>", rec.region_name);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_CITY_NAME
        OUT("<td>%s</td>", rec.city_name);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_METHOD
        OUT("<td>%s</td>", rec.method);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_URI
        OUT("<td>%s</td>", rec.uri);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_REFERER
        OUT("<td>%s</td>", rec.referer);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_UAGENT
        OUT("<td>%s</td>", rec.uagent);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_LANG
        OUT("<td>%s</td>", rec.lang);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_UA_TYPE
#ifdef VIEW_VISITS_ENUM_UA_TYPE_01_VAL   /* combo box instead of input */
        OUT("<td>%s</td>", ua_type(ci, rec.ua_type));
#else
        OUT("<td>%c</td>", rec.ua_type);
#endif
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_BOT
#ifdef VIEW_VISITS_ENUM_BOT_01_VAL   /* combo box instead of input */
        OUT("<td>%s</td>", bot(ci, rec.bot));
#else
        OUT("<td>%c</td>", rec.bot);
#endif
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_AD
#ifdef VIEW_VISITS_ENUM_AD_01_VAL   /* combo box instead of input */
        OUT("<td>%s</td>", ad(ci, rec.ad));
#else
        OUT("<td>%c</td>", rec.ad);
#endif
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_SESSION_ID
        OUT("<td class=r>%d</td>", rec.session_id);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_STATUS
        OUT("<td class=r>%d</td>", rec.status);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_PROCESSING
        OUT("<td class=r>%f</td>", rec.processing);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_CREATED
        OUT("<td>%s</td>", rec.created);
#endif

#ifdef VIEW_VISITS_LIST_DSK_AFTER_COLUMNS
        VIEW_VISITS_LIST_DSK_AFTER_COLUMNS;
#endif
    }
    else    /* REQ_MOB */
    {
#ifdef VIEW_VISITS_LIST_MOB_BEFORE_COLUMNS
        VIEW_VISITS_LIST_MOB_BEFORE_COLUMNS;
#endif

#ifndef VIEW_VISITS_LIST_MOB_HIDE_ID
        OUT("<td class=r>%d</td>", rec.id);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_IP
        OUT("<td>%s</td>", rec.ip);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_COUNTRY_CODE
        OUT("<td>%s</td>", rec.country_code);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_REGION_NAME
        OUT("<td>%s</td>", rec.region_name);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_CITY_NAME
        OUT("<td>%s</td>", rec.city_name);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_METHOD
        OUT("<td>%s</td>", rec.method);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_URI
        OUT("<td>%s</td>", rec.uri);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_REFERER
        OUT("<td>%s</td>", rec.referer);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_UAGENT
        OUT("<td>%s</td>", rec.uagent);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_LANG
        OUT("<td>%s</td>", rec.lang);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_UA_TYPE
#ifdef VIEW_VISITS_ENUM_UA_TYPE_01_VAL   /* combo box instead of input */
        OUT("<td>%s</td>", ua_type(ci, rec.ua_type));
#else
        OUT("<td>%c</td>", rec.ua_type);
#endif
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_BOT
#ifdef VIEW_VISITS_ENUM_BOT_01_VAL   /* combo box instead of input */
        OUT("<td>%s</td>", bot(ci, rec.bot));
#else
        OUT("<td>%c</td>", rec.bot);
#endif
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_AD
#ifdef VIEW_VISITS_ENUM_AD_01_VAL   /* combo box instead of input */
        OUT("<td>%s</td>", ad(ci, rec.ad));
#else
        OUT("<td>%c</td>", rec.ad);
#endif
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_SESSION_ID
        OUT("<td class=r>%d</td>", rec.session_id);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_STATUS
        OUT("<td class=r>%d</td>", rec.status);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_PROCESSING
        OUT("<td class=r>%f</td>", rec.processing);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_CREATED
        OUT("<td>%s</td>", rec.created);
#endif

#ifdef VIEW_VISITS_LIST_MOB_AFTER_COLUMNS
        VIEW_VISITS_LIST_MOB_AFTER_COLUMNS;
#endif
    }

    sprintf(details_lnk, "<a class=\"%s\" href=\"/visits?id=%d\">%s</a>", VIEW_LINK_CLASS, rec.id, VIEW_DETAILS);

#ifdef VIEW_VISITS_EDIT_ON_LIST
    if ( US.auth_level >= AUTH_LEVEL_ADMIN
            || (US.auth_level>=VISITS_AUTH_MID_LEVEL && IS_AUTH_UPDATE(VISITS_AUTH_MID_ACCESS))
            || (US.auth_level>=VISITS_AUTH_LOW_LEVEL && IS_AUTH_UPDATE(VISITS_AUTH_LOW_ACCESS))
            || IS_AUTH_UPDATE(VISITS_AUTH_PUBLIC_ACCESS) )
        sprintf(edit_lnk, "<a class=\"%s\" href=\"/visits/edit?id=%d\">%s</a>", VIEW_LINK_CLASS, rec.id, VIEW_EDIT);
#endif  /* VIEW_VISITS_EDIT_ON_LIST */

#ifdef VIEW_VISITS_REMOVE_ON_LIST
    if ( US.auth_level >= AUTH_LEVEL_ADMIN
            || (US.auth_level>=VISITS_AUTH_MID_LEVEL && IS_AUTH_DELETE(VISITS_AUTH_MID_ACCESS))
            || (US.auth_level>=VISITS_AUTH_LOW_LEVEL && IS_AUTH_DELETE(VISITS_AUTH_LOW_ACCESS))
            || IS_AUTH_DELETE(VISITS_AUTH_PUBLIC_ACCESS) )
        sprintf(remove_lnk, "<a class=\"%s\" href=\"/visits/remove?id=%d\">%s</a>", VIEW_LINK_CLASS, rec.id, VIEW_REMOVE);
#endif  /* VIEW_VISITS_REMOVE_ON_LIST */

    OUT("<td>");
    OUT(details_lnk);
    if ( edit_lnk[0] ) OUT(" | %s", edit_lnk);
    if ( remove_lnk[0] ) OUT(" | %s", remove_lnk);
    OUT("</td>");
    OUT("</tr>");
}


/* ---------------------------------------------------------------------------
   Parse IN clause for SQL
--------------------------------------------------------------------------- */
static char *parse_in_str(const char *src)
{
static char dst[4096];
    const char *p=src;
    int i=0;

    dst[i++] = '\'';

    while ( *p && i < 4090 )
    {
        if ( *p!='\'' && *p!=';' && *p!=',' )
            dst[i++] = *p;
        else if ( *p==',' )
        {
            dst[i++] = '\'';
            dst[i++] = ',';
            dst[i++] = '\'';
        }

        ++p;
    }

    dst[i++] = '\'';
    dst[i] = EOS;

    return dst;
}


/* ---------------------------------------------------------------------------
   Parse IN clause for SQL
--------------------------------------------------------------------------- */
static char *parse_in_num(const char *src)
{
static char dst[4096];
    const char *p=src;
    int i=0;

    while ( *p && i < 4090 )
    {
        if ( isdigit(*p) || *p=='.' || *p==',' )
            dst[i++] = *p;

        ++p;
    }

    dst[i] = EOS;

    return dst;
}


/* ---------------------------------------------------------------------------
   Parse IN clause for SQL
--------------------------------------------------------------------------- */
static char *parse_in_order(const char *src)
{
static char dst[4096];
    const char *p=src;
    int i=0;

    while ( *p && i < 4090 )
    {
        if ( isalnum(*p) || *p=='_' || *p==',' )
            dst[i++] = *p;

        ++p;
    }

    dst[i] = EOS;

    return dst;
}


/* ---------------------------------------------------------------------------
   Build WHERE clause from URI
--------------------------------------------------------------------------- */
static void build_where(int ci, char *where)
{
    OUTP_BEGIN(where);

    if ( !strchr(conn[ci].uri, '?') )
    {
        OUTP_END;
        return;
    }

    QSVAL qsval;

    bool where_first=true;

    char ip_op[8]="";
    QSVAL ip_val;

    if ( QS("ip", ip_val) )
        strcpy(ip_op, "L2");
    else if ( QS("ip_eq", ip_val) )
        strcpy(ip_op, "=");
    else if ( QS("ip_sw", ip_val) )
        strcpy(ip_op, "L1");
    else if ( QS("ip_neq", ip_val) )
        strcpy(ip_op, "!=");
    else if ( QS("ip_in", ip_val) )
        strcpy(ip_op, "IN");
    else if ( QS("ip_nin", ip_val) )
        strcpy(ip_op, "NOT IN");

    if ( ip_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(ip_op, "L1") )
            OUTP("ip LIKE '%s%%'", ip_val);
        else if ( 0==strcmp(ip_op, "L2") )
            OUTP("ip LIKE '%%%s%%'", ip_val);
        else if ( 0==strcmp(ip_op, "IN") || 0==strcmp(ip_op, "NOT IN") )
            OUTP("ip %s (%s)", ip_op, parse_in_str(ip_val));
        else
            OUTP("ip%s'%s'", ip_op, ip_val);
    }

    char country_code_op[8]="";
    QSVAL country_code_val;

    if ( QS("country_code", country_code_val) )
        strcpy(country_code_op, "L2");
    else if ( QS("country_code_eq", country_code_val) )
        strcpy(country_code_op, "=");
    else if ( QS("country_code_sw", country_code_val) )
        strcpy(country_code_op, "L1");
    else if ( QS("country_code_neq", country_code_val) )
        strcpy(country_code_op, "!=");
    else if ( QS("country_code_in", country_code_val) )
        strcpy(country_code_op, "IN");
    else if ( QS("country_code_nin", country_code_val) )
        strcpy(country_code_op, "NOT IN");

    if ( country_code_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(country_code_op, "L1") )
            OUTP("country_code LIKE '%s%%'", country_code_val);
        else if ( 0==strcmp(country_code_op, "L2") )
            OUTP("country_code LIKE '%%%s%%'", country_code_val);
        else if ( 0==strcmp(country_code_op, "IN") || 0==strcmp(country_code_op, "NOT IN") )
            OUTP("country_code %s (%s)", country_code_op, parse_in_str(country_code_val));
        else
            OUTP("country_code%s'%s'", country_code_op, country_code_val);
    }

    char region_name_op[8]="";
    QSVAL region_name_val;

    if ( QS("region_name", region_name_val) )
        strcpy(region_name_op, "L2");
    else if ( QS("region_name_eq", region_name_val) )
        strcpy(region_name_op, "=");
    else if ( QS("region_name_sw", region_name_val) )
        strcpy(region_name_op, "L1");
    else if ( QS("region_name_neq", region_name_val) )
        strcpy(region_name_op, "!=");
    else if ( QS("region_name_in", region_name_val) )
        strcpy(region_name_op, "IN");
    else if ( QS("region_name_nin", region_name_val) )
        strcpy(region_name_op, "NOT IN");

    if ( region_name_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(region_name_op, "L1") )
            OUTP("region_name LIKE '%s%%'", region_name_val);
        else if ( 0==strcmp(region_name_op, "L2") )
            OUTP("region_name LIKE '%%%s%%'", region_name_val);
        else if ( 0==strcmp(region_name_op, "IN") || 0==strcmp(region_name_op, "NOT IN") )
            OUTP("region_name %s (%s)", region_name_op, parse_in_str(region_name_val));
        else
            OUTP("region_name%s'%s'", region_name_op, region_name_val);
    }

    char city_name_op[8]="";
    QSVAL city_name_val;

    if ( QS("city_name", city_name_val) )
        strcpy(city_name_op, "L2");
    else if ( QS("city_name_eq", city_name_val) )
        strcpy(city_name_op, "=");
    else if ( QS("city_name_sw", city_name_val) )
        strcpy(city_name_op, "L1");
    else if ( QS("city_name_neq", city_name_val) )
        strcpy(city_name_op, "!=");
    else if ( QS("city_name_in", city_name_val) )
        strcpy(city_name_op, "IN");
    else if ( QS("city_name_nin", city_name_val) )
        strcpy(city_name_op, "NOT IN");

    if ( city_name_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(city_name_op, "L1") )
            OUTP("city_name LIKE '%s%%'", city_name_val);
        else if ( 0==strcmp(city_name_op, "L2") )
            OUTP("city_name LIKE '%%%s%%'", city_name_val);
        else if ( 0==strcmp(city_name_op, "IN") || 0==strcmp(city_name_op, "NOT IN") )
            OUTP("city_name %s (%s)", city_name_op, parse_in_str(city_name_val));
        else
            OUTP("city_name%s'%s'", city_name_op, city_name_val);
    }

    char method_op[8]="";
    QSVAL method_val;

    if ( QS("method", method_val) )
        strcpy(method_op, "L2");
    else if ( QS("method_eq", method_val) )
        strcpy(method_op, "=");
    else if ( QS("method_sw", method_val) )
        strcpy(method_op, "L1");
    else if ( QS("method_neq", method_val) )
        strcpy(method_op, "!=");
    else if ( QS("method_in", method_val) )
        strcpy(method_op, "IN");
    else if ( QS("method_nin", method_val) )
        strcpy(method_op, "NOT IN");

    if ( method_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(method_op, "L1") )
            OUTP("method LIKE '%s%%'", method_val);
        else if ( 0==strcmp(method_op, "L2") )
            OUTP("method LIKE '%%%s%%'", method_val);
        else if ( 0==strcmp(method_op, "IN") || 0==strcmp(method_op, "NOT IN") )
            OUTP("method %s (%s)", method_op, parse_in_str(method_val));
        else
            OUTP("method%s'%s'", method_op, method_val);
    }

    char uri_op[8]="";
    QSVAL uri_val;

    if ( QS("uri", uri_val) )
        strcpy(uri_op, "L2");
    else if ( QS("uri_eq", uri_val) )
        strcpy(uri_op, "=");
    else if ( QS("uri_sw", uri_val) )
        strcpy(uri_op, "L1");
    else if ( QS("uri_neq", uri_val) )
        strcpy(uri_op, "!=");
    else if ( QS("uri_in", uri_val) )
        strcpy(uri_op, "IN");
    else if ( QS("uri_nin", uri_val) )
        strcpy(uri_op, "NOT IN");

    if ( uri_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(uri_op, "L1") )
            OUTP("uri LIKE '%s%%'", uri_val);
        else if ( 0==strcmp(uri_op, "L2") )
            OUTP("uri LIKE '%%%s%%'", uri_val);
        else if ( 0==strcmp(uri_op, "IN") || 0==strcmp(uri_op, "NOT IN") )
            OUTP("uri %s (%s)", uri_op, parse_in_str(uri_val));
        else
            OUTP("uri%s'%s'", uri_op, uri_val);
    }

    char referer_op[8]="";
    QSVAL referer_val;

    if ( QS("referer", referer_val) )
        strcpy(referer_op, "L2");
    else if ( QS("referer_eq", referer_val) )
        strcpy(referer_op, "=");
    else if ( QS("referer_sw", referer_val) )
        strcpy(referer_op, "L1");
    else if ( QS("referer_neq", referer_val) )
        strcpy(referer_op, "!=");
    else if ( QS("referer_in", referer_val) )
        strcpy(referer_op, "IN");
    else if ( QS("referer_nin", referer_val) )
        strcpy(referer_op, "NOT IN");

    if ( referer_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(referer_op, "L1") )
            OUTP("referer LIKE '%s%%'", referer_val);
        else if ( 0==strcmp(referer_op, "L2") )
            OUTP("referer LIKE '%%%s%%'", referer_val);
        else if ( 0==strcmp(referer_op, "IN") || 0==strcmp(referer_op, "NOT IN") )
            OUTP("referer %s (%s)", referer_op, parse_in_str(referer_val));
        else
            OUTP("referer%s'%s'", referer_op, referer_val);
    }

    char uagent_op[8]="";
    QSVAL uagent_val;

    if ( QS("uagent", uagent_val) )
        strcpy(uagent_op, "L2");
    else if ( QS("uagent_eq", uagent_val) )
        strcpy(uagent_op, "=");
    else if ( QS("uagent_sw", uagent_val) )
        strcpy(uagent_op, "L1");
    else if ( QS("uagent_neq", uagent_val) )
        strcpy(uagent_op, "!=");
    else if ( QS("uagent_in", uagent_val) )
        strcpy(uagent_op, "IN");
    else if ( QS("uagent_nin", uagent_val) )
        strcpy(uagent_op, "NOT IN");

    if ( uagent_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(uagent_op, "L1") )
            OUTP("uagent LIKE '%s%%'", uagent_val);
        else if ( 0==strcmp(uagent_op, "L2") )
            OUTP("uagent LIKE '%%%s%%'", uagent_val);
        else if ( 0==strcmp(uagent_op, "IN") || 0==strcmp(uagent_op, "NOT IN") )
            OUTP("uagent %s (%s)", uagent_op, parse_in_str(uagent_val));
        else
            OUTP("uagent%s'%s'", uagent_op, uagent_val);
    }

    char lang_op[8]="";
    QSVAL lang_val;

    if ( QS("lang", lang_val) )
        strcpy(lang_op, "L2");
    else if ( QS("lang_eq", lang_val) )
        strcpy(lang_op, "=");
    else if ( QS("lang_sw", lang_val) )
        strcpy(lang_op, "L1");
    else if ( QS("lang_neq", lang_val) )
        strcpy(lang_op, "!=");
    else if ( QS("lang_in", lang_val) )
        strcpy(lang_op, "IN");
    else if ( QS("lang_nin", lang_val) )
        strcpy(lang_op, "NOT IN");

    if ( lang_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(lang_op, "L1") )
            OUTP("lang LIKE '%s%%'", lang_val);
        else if ( 0==strcmp(lang_op, "L2") )
            OUTP("lang LIKE '%%%s%%'", lang_val);
        else if ( 0==strcmp(lang_op, "IN") || 0==strcmp(lang_op, "NOT IN") )
            OUTP("lang %s (%s)", lang_op, parse_in_str(lang_val));
        else
            OUTP("lang%s'%s'", lang_op, lang_val);
    }

    char ua_type_op[8]="";
    char ua_type_val;

    if ( QS("ua_type", qsval) )
    {
        ua_type_val = qsval[0];
        strcpy(ua_type_op, "=");
    }
    else if ( QS("ua_type_eq", qsval) )
    {
        ua_type_val = qsval[0];
        strcpy(ua_type_op, "=");
    }
    else if ( QS("ua_type_neq", qsval) )
    {
        ua_type_val = qsval[0];
        strcpy(ua_type_op, "!=");
    }
    else if ( QS("ua_type_in", qsval) )
    {
        strcpy(ua_type_op, "IN");
    }
    else if ( QS("ua_type_nin", qsval) )
    {
        strcpy(ua_type_op, "NOT IN");
    }

    if ( ua_type_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(ua_type_op, "IN") || 0==strcmp(ua_type_op, "NOT IN") )
            OUTP("ua_type %s (%s)", ua_type_op, parse_in_str(qsval));
        else
            OUTP("ua_type%s'%c'", ua_type_op, ua_type_val);
    }

    char bot_op[8]="";
    char bot_val;

    if ( QS("bot", qsval) )
    {
        bot_val = qsval[0];
        strcpy(bot_op, "=");
    }
    else if ( QS("bot_eq", qsval) )
    {
        bot_val = qsval[0];
        strcpy(bot_op, "=");
    }
    else if ( QS("bot_neq", qsval) )
    {
        bot_val = qsval[0];
        strcpy(bot_op, "!=");
    }
    else if ( QS("bot_in", qsval) )
    {
        strcpy(bot_op, "IN");
    }
    else if ( QS("bot_nin", qsval) )
    {
        strcpy(bot_op, "NOT IN");
    }

    if ( bot_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(bot_op, "IN") || 0==strcmp(bot_op, "NOT IN") )
            OUTP("bot %s (%s)", bot_op, parse_in_str(qsval));
        else
            OUTP("bot%s'%c'", bot_op, bot_val);
    }

    char ad_op[8]="";
    char ad_val;

    if ( QS("ad", qsval) )
    {
        ad_val = qsval[0];
        strcpy(ad_op, "=");
    }
    else if ( QS("ad_eq", qsval) )
    {
        ad_val = qsval[0];
        strcpy(ad_op, "=");
    }
    else if ( QS("ad_neq", qsval) )
    {
        ad_val = qsval[0];
        strcpy(ad_op, "!=");
    }
    else if ( QS("ad_in", qsval) )
    {
        strcpy(ad_op, "IN");
    }
    else if ( QS("ad_nin", qsval) )
    {
        strcpy(ad_op, "NOT IN");
    }

    if ( ad_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(ad_op, "IN") || 0==strcmp(ad_op, "NOT IN") )
            OUTP("ad %s (%s)", ad_op, parse_in_str(qsval));
        else
            OUTP("ad%s'%c'", ad_op, ad_val);
    }

    char session_id_op[8]="";
    int session_id_val;

    if ( QSI("session_id", &session_id_val) )
        strcpy(session_id_op, "=");
    else if ( QSI("session_id_eq", &session_id_val) )
        strcpy(session_id_op, "=");
    else if ( QSI("session_id_neq", &session_id_val) )
        strcpy(session_id_op, "!=");
    else if ( QSI("session_id_lt", &session_id_val) )
        strcpy(session_id_op, "<");
    else if ( QSI("session_id_lte", &session_id_val) )
        strcpy(session_id_op, "<=");
    else if ( QSI("session_id_gt", &session_id_val) )
        strcpy(session_id_op, ">");
    else if ( QSI("session_id_gte", &session_id_val) )
        strcpy(session_id_op, ">=");
    else if ( QS("session_id_in", qsval) )
        strcpy(session_id_op, "IN");
    else if ( QS("session_id_nin", qsval) )
        strcpy(session_id_op, "NOT IN");

    if ( session_id_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(session_id_op, "IN") || 0==strcmp(session_id_op, "NOT IN") )
            OUTP("session_id %s (%s)", session_id_op, parse_in_num(qsval));
        else
            OUTP("session_id%s%d", session_id_op, session_id_val);
    }

    char status_op[8]="";
    int status_val;

    if ( QSI("status", &status_val) )
        strcpy(status_op, "=");
    else if ( QSI("status_eq", &status_val) )
        strcpy(status_op, "=");
    else if ( QSI("status_neq", &status_val) )
        strcpy(status_op, "!=");
    else if ( QSI("status_lt", &status_val) )
        strcpy(status_op, "<");
    else if ( QSI("status_lte", &status_val) )
        strcpy(status_op, "<=");
    else if ( QSI("status_gt", &status_val) )
        strcpy(status_op, ">");
    else if ( QSI("status_gte", &status_val) )
        strcpy(status_op, ">=");
    else if ( QS("status_in", qsval) )
        strcpy(status_op, "IN");
    else if ( QS("status_nin", qsval) )
        strcpy(status_op, "NOT IN");

    if ( status_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(status_op, "IN") || 0==strcmp(status_op, "NOT IN") )
            OUTP("status %s (%s)", status_op, parse_in_num(qsval));
        else
            OUTP("status%s%d", status_op, status_val);
    }

    char processing_op[8]="";
    double processing_val;

    if ( QSD("processing", &processing_val) )
        strcpy(processing_op, "=");
    else if ( QSD("processing_eq", &processing_val) )
        strcpy(processing_op, "=");
    else if ( QSD("processing_neq", &processing_val) )
        strcpy(processing_op, "!=");
    else if ( QSD("processing_lt", &processing_val) )
        strcpy(processing_op, "<");
    else if ( QSD("processing_lte", &processing_val) )
        strcpy(processing_op, "<=");
    else if ( QSD("processing_gt", &processing_val) )
        strcpy(processing_op, ">");
    else if ( QSD("processing_gte", &processing_val) )
        strcpy(processing_op, ">=");
    else if ( QS("processing_in", qsval) )
        strcpy(processing_op, "IN");
    else if ( QS("processing_nin", qsval) )
        strcpy(processing_op, "NOT IN");

    if ( processing_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(processing_op, "IN") || 0==strcmp(processing_op, "NOT IN") )
            OUTP("processing %s (%s)", processing_op, parse_in_num(qsval));
        else
            OUTP("processing%s%lf", processing_op, processing_val);
    }

    char created_op[8]="";
    QSVAL created_val;

    if ( QS("created", created_val) )
        strcpy(created_op, "L2");
    else if ( QS("created_eq", created_val) )
        strcpy(created_op, "=");
    else if ( QS("created_sw", created_val) )
        strcpy(created_op, "L1");
    else if ( QS("created_neq", created_val) )
        strcpy(created_op, "!=");
    else if ( QS("created_in", created_val) )
        strcpy(created_op, "IN");
    else if ( QS("created_nin", created_val) )
        strcpy(created_op, "NOT IN");

    if ( created_op[0] )
    {
        if ( where_first )
            where_first = false;
        else
            OUTP(" AND ");

        if ( 0==strcmp(created_op, "L1") )
            OUTP("created LIKE '%s%%'", created_val);
        else if ( 0==strcmp(created_op, "L2") )
            OUTP("created LIKE '%%%s%%'", created_val);
        else if ( 0==strcmp(created_op, "IN") || 0==strcmp(created_op, "NOT IN") )
            OUTP("created %s (%s)", created_op, parse_in_str(created_val));
        else
            OUTP("created%s'%s'", created_op, created_val);
    }

    if ( where_first )   /* no filtering */
    {
        QSVAL order;

        if ( QS("o", order) )
            OUTP("1=1 ORDER BY %s", parse_in_order(order));
        else if ( QS("od", order) )
            OUTP("1=1 ORDER BY %s DESC", parse_in_order(order));

        OUTP_END;
        DBG("where [%s]", where);
        return;
    }

    /* filter applied */

    QSVAL order;

    if ( QS("o", order) )
        OUTP(" ORDER BY %s", parse_in_order(order));
    else if ( QS("od", order) )
        OUTP(" ORDER BY %s DESC", parse_in_order(order));

    OUTP_END;

    DBG("where [%s]", where);
}


/* ---------------------------------------------------------------------------
   Show single record
--------------------------------------------------------------------------- */
static int render_details(int ci, Cvisits& rec)
{
    OUT("<style>");

    if ( REQ_DSK )
    {
        OUT(".rg{text-align:right;color:grey;}");
        OUT(".vat{vertical-align:top;}");
    }
    else    /* REQ_MOB */
    {
        OUT(".g{color:grey;}");
    }

    OUT("</style>");

    try
    {
        if ( !rec.Get(rec.id) )
        {
            WAR("render_details: Record not found");
            OUT("<p>%s</p>", VIEW_RECORD_NOT_FOUND);
            return ERR_RECORD_NOT_FOUND;
        }

        /* No restrictions on the record level */

#ifdef VIEW_VISITS_DETAILS_BEFORE_TABLE
        VIEW_VISITS_DETAILS_BEFORE_TABLE;
#endif

        OUT("<table class=\"%s%s\">", REQ_MOB?"w100p ":"", VIEW_DETAILS_TABLE_CLASS);

#ifdef VIEW_VISITS_DETAILS_BEFORE_COLUMNS
        VIEW_VISITS_DETAILS_BEFORE_COLUMNS;
#endif

        if ( REQ_DSK )
        {
            OUT("<tr><td class=rg>%s:</td><td>%d</td></tr>", VIEW_VISITS_ID, rec.id);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_IP, rec.ip);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_COUNTRY_CODE, rec.country_code);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_REGION_NAME, rec.region_name);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_CITY_NAME, rec.city_name);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_METHOD, rec.method);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_URI, rec.uri);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_REFERER, rec.referer);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_UAGENT, rec.uagent);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_LANG, rec.lang);
#ifdef VIEW_VISITS_ENUM_UA_TYPE_01_VAL   /* combo box instead of input */
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_UA_TYPE, ua_type(ci, rec.ua_type));
#else
            OUT("<tr><td class=rg>%s:</td><td>%c</td></tr>", VIEW_VISITS_UA_TYPE, rec.ua_type);
#endif
#ifdef VIEW_VISITS_ENUM_BOT_01_VAL   /* combo box instead of input */
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_BOT, bot(ci, rec.bot));
#else
            OUT("<tr><td class=rg>%s:</td><td>%c</td></tr>", VIEW_VISITS_BOT, rec.bot);
#endif
#ifdef VIEW_VISITS_ENUM_AD_01_VAL   /* combo box instead of input */
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_AD, ad(ci, rec.ad));
#else
            OUT("<tr><td class=rg>%s:</td><td>%c</td></tr>", VIEW_VISITS_AD, rec.ad);
#endif
            OUT("<tr><td class=rg>%s:</td><td>%d</td></tr>", VIEW_VISITS_SESSION_ID, rec.session_id);
            OUT("<tr><td class=rg>%s:</td><td>%d</td></tr>", VIEW_VISITS_STATUS, rec.status);
            OUT("<tr><td class=rg>%s:</td><td>%f</td></tr>", VIEW_VISITS_PROCESSING, rec.processing);
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_CREATED, rec.created);
        }
        else    /* REQ_MOB */
        {
            OUT("<tr><td><span class=g>%s:</span><br>%d</td></tr>", VIEW_VISITS_ID, rec.id);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_IP, rec.ip);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_COUNTRY_CODE, rec.country_code);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_REGION_NAME, rec.region_name);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_CITY_NAME, rec.city_name);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_METHOD, rec.method);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_URI, rec.uri);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_REFERER, rec.referer);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_UAGENT, rec.uagent);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_LANG, rec.lang);
#ifdef VIEW_VISITS_ENUM_UA_TYPE_01_VAL   /* combo box instead of input */
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_UA_TYPE, ua_type(ci, rec.ua_type));
#else
            OUT("<tr><td><span class=g>%s:</span><br>%c</td></tr>", VIEW_VISITS_UA_TYPE, rec.ua_type);
#endif
#ifdef VIEW_VISITS_ENUM_BOT_01_VAL   /* combo box instead of input */
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_BOT, bot(ci, rec.bot));
#else
            OUT("<tr><td><span class=g>%s:</span><br>%c</td></tr>", VIEW_VISITS_BOT, rec.bot);
#endif
#ifdef VIEW_VISITS_ENUM_AD_01_VAL   /* combo box instead of input */
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_AD, ad(ci, rec.ad));
#else
            OUT("<tr><td><span class=g>%s:</span><br>%c</td></tr>", VIEW_VISITS_AD, rec.ad);
#endif
            OUT("<tr><td><span class=g>%s:</span><br>%d</td></tr>", VIEW_VISITS_SESSION_ID, rec.session_id);
            OUT("<tr><td><span class=g>%s:</span><br>%d</td></tr>", VIEW_VISITS_STATUS, rec.status);
            OUT("<tr><td><span class=g>%s:</span><br>%f</td></tr>", VIEW_VISITS_PROCESSING, rec.processing);
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_CREATED, rec.created);
        }

#ifdef VIEW_VISITS_DETAILS_AFTER_COLUMNS
        VIEW_VISITS_DETAILS_AFTER_COLUMNS;
#endif

        OUT("<tr><td%s>&nbsp;</td></tr>", REQ_DSK?" colspan=2":"");

        char list_lnk[256]="";
        char edit_lnk[256]="";
        char remove_lnk[256]="";

        sprintf(list_lnk, "<a class=\"%s\" href=\"/visits\" onClick=\"wait();\">%s</a>", VIEW_LINK_CLASS, VIEW_LIST);

        if ( US.auth_level >= AUTH_LEVEL_ADMIN
                || (US.auth_level>=VISITS_AUTH_MID_LEVEL && IS_AUTH_UPDATE(VISITS_AUTH_MID_ACCESS))
                || (US.auth_level>=VISITS_AUTH_LOW_LEVEL && IS_AUTH_UPDATE(VISITS_AUTH_LOW_ACCESS))
                || IS_AUTH_UPDATE(VISITS_AUTH_PUBLIC_ACCESS) )
            sprintf(edit_lnk, "<a class=\"%s\" href=\"/visits/edit?id=%d\">%s</a>", VIEW_LINK_CLASS, rec.id, VIEW_EDIT);

        if ( US.auth_level >= AUTH_LEVEL_ADMIN
                || (US.auth_level>=VISITS_AUTH_MID_LEVEL && IS_AUTH_DELETE(VISITS_AUTH_MID_ACCESS))
                || (US.auth_level>=VISITS_AUTH_LOW_LEVEL && IS_AUTH_DELETE(VISITS_AUTH_LOW_ACCESS))
                || IS_AUTH_DELETE(VISITS_AUTH_PUBLIC_ACCESS) )
            sprintf(remove_lnk, "<a class=\"%s\" href=\"/visits/remove?id=%d\">%s</a>", VIEW_LINK_CLASS, rec.id, VIEW_REMOVE);

        OUT("<tr>%s<td>", REQ_DSK?"<td></td>":"");
        OUT(list_lnk);
        if ( edit_lnk[0] ) OUT(" | %s", edit_lnk);
        if ( remove_lnk[0] ) OUT(" | %s", remove_lnk);
        OUT("</td></tr>");

        OUT("</table>");
    }
    catch (std::exception& e)
    {
        ERR(e.what());
        OUT("<p>%s</p>", e.what());
        return ERR_INT_SERVER_ERROR;
    }

    return OK;
}


/* ---------------------------------------------------------------------------
   Show list
--------------------------------------------------------------------------- */
static int render_list(int ci)
{
    OUT("<style>");
    OUT(".l{text-align:left;}");
    OUT(".r{text-align:right;}");
    OUT("</style>");

#ifdef VIEW_VISITS_LIST_BEFORE_TABLE
    VIEW_VISITS_LIST_BEFORE_TABLE;
#endif

    /* new record button */

#ifndef VIEW_VISITS_LIST_DISABLE_NEW
    if ( US.auth_level >= AUTH_LEVEL_ADMIN
            || (US.auth_level>=VISITS_AUTH_MID_LEVEL && IS_AUTH_CREATE(VISITS_AUTH_MID_ACCESS))
            || (US.auth_level>=VISITS_AUTH_LOW_LEVEL && IS_AUTH_CREATE(VISITS_AUTH_LOW_ACCESS))
            || IS_AUTH_CREATE(VISITS_AUTH_PUBLIC_ACCESS) )
    {
        OUT("<p><button class=\"%s\" onClick=\"gt('/visits/edit');\">%s</button></p>", VIEW_BUTTON_CLASS, VIEW_VISITS_NEW_RECORD);
    }
#endif  /* VIEW_VISITS_LIST_DISABLE_NEW */

    OUT("<table class=\"%s\">", VIEW_LIST_TABLE_CLASS);

    /* header row */

    OUT("<tr>");

    if ( REQ_DSK )
    {
#ifdef VIEW_VISITS_LIST_DSK_BEFORE_HEADERS
        VIEW_VISITS_LIST_DSK_BEFORE_HEADERS;
#endif

#ifndef VIEW_VISITS_LIST_DSK_HIDE_ID
        OUT("<th class=\"%s r\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_ID);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_IP
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_IP);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_COUNTRY_CODE
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_COUNTRY_CODE);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_REGION_NAME
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_REGION_NAME);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_CITY_NAME
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_CITY_NAME);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_METHOD
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_METHOD);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_URI
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_URI);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_REFERER
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_REFERER);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_UAGENT
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_UAGENT);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_LANG
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_LANG);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_UA_TYPE
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_UA_TYPE);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_BOT
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_BOT);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_AD
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_AD);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_SESSION_ID
        OUT("<th class=\"%s r\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_SESSION_ID);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_STATUS
        OUT("<th class=\"%s r\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_STATUS);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_PROCESSING
        OUT("<th class=\"%s r\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_PROCESSING);
#endif
#ifndef VIEW_VISITS_LIST_DSK_HIDE_CREATED
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_CREATED);
#endif

#ifdef VIEW_VISITS_LIST_DSK_AFTER_HEADERS
        VIEW_VISITS_LIST_DSK_AFTER_HEADERS;
#endif
    }
    else    /* REQ_MOB */
    {
#ifdef VIEW_VISITS_LIST_MOB_BEFORE_HEADERS
        VIEW_VISITS_LIST_MOB_BEFORE_HEADERS;
#endif

#ifndef VIEW_VISITS_LIST_MOB_HIDE_ID
        OUT("<th class=\"%s r\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_ID);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_IP
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_IP);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_COUNTRY_CODE
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_COUNTRY_CODE);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_REGION_NAME
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_REGION_NAME);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_CITY_NAME
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_CITY_NAME);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_METHOD
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_METHOD);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_URI
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_URI);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_REFERER
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_REFERER);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_UAGENT
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_UAGENT);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_LANG
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_LANG);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_UA_TYPE
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_UA_TYPE);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_BOT
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_BOT);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_AD
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_AD);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_SESSION_ID
        OUT("<th class=\"%s r\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_SESSION_ID);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_STATUS
        OUT("<th class=\"%s r\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_STATUS);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_PROCESSING
        OUT("<th class=\"%s r\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_PROCESSING);
#endif
#ifndef VIEW_VISITS_LIST_MOB_HIDE_CREATED
        OUT("<th class=\"%s l\">%s</th>", VIEW_LIST_TABLE_TH_CLASS, VIEW_VISITS_CREATED);
#endif

#ifdef VIEW_VISITS_LIST_MOB_AFTER_HEADERS
        VIEW_VISITS_LIST_MOB_AFTER_HEADERS;
#endif
    }

    OUT("<th class=%s></th>", VIEW_LIST_TABLE_TH_CLASS);
    OUT("</tr>");

    try
    {
static Cvisits recA;   /* Admin */
static Cvisits recM;   /* Middle */
static Cvisits recL;   /* Low */
static Cvisits recP;   /* Public */

static bool first=true;

        if ( first )
        {
            recA.PrepareCursor();
            recM.PrepareCursor();
            recL.PrepareCursor();
            recP.PrepareCursor();

            first = false;
        }

        char where[8192]="";

        build_where(ci, where);

        int i=0;

        if ( where[0] )   /* filtered */
        {
static Cvisits recF;   /* filter */

            recF.PrepareCursor(where);

            recF.OpenCursor();

            while ( recF.Fetch() )
                output_row(ci, recF, i++);
        }
        else    /* not filtered */
        {
            if ( US.auth_level >= AUTH_LEVEL_ADMIN )
                recA.OpenCursor();
            else if ( US.auth_level >= VISITS_AUTH_MID_LEVEL )
                recM.OpenCursor();
            else if ( US.auth_level >= VISITS_AUTH_LOW_LEVEL )
                recL.OpenCursor();
            else
                recP.OpenCursor();

            if ( US.auth_level >= AUTH_LEVEL_ADMIN )
            {
                while ( recA.Fetch() )
                    output_row(ci, recA, i++);
            }
            else if ( US.auth_level >= VISITS_AUTH_MID_LEVEL )
            {
                while ( recM.Fetch() )
                    output_row(ci, recM, i++);
            }
            else if ( US.auth_level >= VISITS_AUTH_LOW_LEVEL )
            {
                while ( recL.Fetch() )
                    output_row(ci, recL, i++);
            }
            else
            {
                while ( recP.Fetch() )
                    output_row(ci, recP, i++);
            }
        }
    }
    catch (std::exception& e)
    {
        ERR(e.what());
        OUT("<tr><td colspan=18>%s</td></tr>", e.what());
        return ERR_INT_SERVER_ERROR;
    }

    OUT("</table>");

    return OK;
}


/* ---------------------------------------------------------------------------
   Show
--------------------------------------------------------------------------- */
static int render_show(int ci)
{
    bool permitted=false;    /* on the table level */

    if ( US.auth_level >= AUTH_LEVEL_ADMIN )
        permitted = true;
    else if ( US.auth_level >= VISITS_AUTH_MID_LEVEL && IS_AUTH_READ(VISITS_AUTH_MID_ACCESS) )
        permitted = true;
    else if ( US.auth_level >= VISITS_AUTH_LOW_LEVEL && IS_AUTH_READ(VISITS_AUTH_LOW_ACCESS) )
        permitted = true;
    else if ( IS_AUTH_READ(VISITS_AUTH_PUBLIC_ACCESS) )
        permitted = true;

    if ( !permitted )
    {
        WAR("render_show: Not permitted (table level)");
        OUT("<p>%s</p>", VIEW_NO_RECORDS);
        return ERR_RECORD_NOT_FOUND;
    }

static Cvisits rec;

    if ( get_id_from_uri(ci, rec) || get_key(ci, rec) )    /* single record */
        return render_details(ci, rec);
    else    /* list */
        return render_list(ci);

    return OK;
}


/* ---------------------------------------------------------------------------
   Edit record
--------------------------------------------------------------------------- */
static int render_edit(int ci)
{
    OUT("<style>");

    if ( REQ_DSK )
    {
        OUT(".rg{text-align:right;color:grey;}");
        OUT(".vat{vertical-align:top;}");
    }
    else    /* REQ_MOB */
    {
        OUT(".g{color:grey;}");
        OUT(".w100p{width:100%;}");
    }

    OUT("</style>");

    try
    {
static Cvisits rec;

        bool edit=false;

        if ( get_key(ci, rec) )
            edit = true;

        bool permitted=false;    /* on the table level */

        if ( US.auth_level >= AUTH_LEVEL_ADMIN )
            permitted = true;
        else if ( US.auth_level >= VISITS_AUTH_MID_LEVEL && ((edit && IS_AUTH_UPDATE(VISITS_AUTH_MID_ACCESS)) || (!edit && IS_AUTH_CREATE(VISITS_AUTH_MID_ACCESS))) )
            permitted = true;
        else if ( US.auth_level >= VISITS_AUTH_LOW_LEVEL && ((edit && IS_AUTH_UPDATE(VISITS_AUTH_LOW_ACCESS)) || (!edit && IS_AUTH_CREATE(VISITS_AUTH_LOW_ACCESS))) )
            permitted = true;
        else if ( ((edit && IS_AUTH_UPDATE(VISITS_AUTH_PUBLIC_ACCESS)) || (!edit && IS_AUTH_CREATE(VISITS_AUTH_PUBLIC_ACCESS))) )
            permitted = true;

        if ( !permitted )
        {
            WAR("render_edit: Not permitted (table level)");
            OUT("<p>%s</p>", VIEW_NO_RECORDS);
            return ERR_RECORD_NOT_FOUND;
        }

        OUT("<form action=\"/visits/do_save\" method=\"POST\">");
        OUT_CSRFT;
        OUT("<input type=\"hidden\" name=\"_edit_flag_\" value=\"%d\">", edit);

        if ( edit )   /* edit existing */
        {
            OUT("<input type=\"hidden\" name=\"id\" value=\"%d\">", rec.id);

            if ( !rec.Get(rec.id) )
            {
                OUT("<p>%s</p>", VIEW_RECORD_NOT_FOUND);
                OUT("</form>");
                return ERR_RECORD_NOT_FOUND;
            }

            /* No restrictions on the record level */
        }
        else    /* new record */
        {
            rec.Reset();
        }

        OUT("<table class=\"%s%s\">", REQ_MOB?"w100p ":"", VIEW_EDIT_TABLE_CLASS);

#ifdef VIEW_VISITS_EDIT_BEFORE_COLUMNS
        VIEW_VISITS_EDIT_BEFORE_COLUMNS;
#endif

        if ( REQ_DSK )
        {
            if ( edit )   /* auto_increment = read-only */
                OUT("<tr><td class=rg>%s:</td><td>%d</td></tr>", VIEW_VISITS_ID, rec.id);


#ifdef VIEW_VISITS_EDIT_READ_ONLY_IP
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_IP, rec.ip);
            OUT("<input type=\"hidden\" name=\"ip\" value=\"%s\">", rec.ip);
#else   /* editable */
#ifdef VIEW_VISITS_EDIT_BEFORE_COLUMNS
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"ip\" value=\"%s\"></td></tr>", VIEW_VISITS_IP, VIEW_LONG_INPUT_CLASS, rec.ip);
#else   /* autofocus */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"ip\" value=\"%s\" autofocus></td></tr>", VIEW_VISITS_IP, VIEW_LONG_INPUT_CLASS, rec.ip);
#endif
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_IP */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_COUNTRY_CODE
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_COUNTRY_CODE, rec.country_code);
            OUT("<input type=\"hidden\" name=\"country_code\" value=\"%s\">", rec.country_code);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"country_code\" value=\"%s\"></td></tr>", VIEW_VISITS_COUNTRY_CODE, VIEW_SHORT_INPUT_CLASS, rec.country_code);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_COUNTRY_CODE */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_REGION_NAME
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_REGION_NAME, rec.region_name);
            OUT("<input type=\"hidden\" name=\"region_name\" value=\"%s\">", rec.region_name);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"region_name\" value=\"%s\"></td></tr>", VIEW_VISITS_REGION_NAME, VIEW_LONG_INPUT_CLASS, rec.region_name);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_REGION_NAME */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_CITY_NAME
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_CITY_NAME, rec.city_name);
            OUT("<input type=\"hidden\" name=\"city_name\" value=\"%s\">", rec.city_name);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"city_name\" value=\"%s\"></td></tr>", VIEW_VISITS_CITY_NAME, VIEW_LONG_INPUT_CLASS, rec.city_name);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_CITY_NAME */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_METHOD
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_METHOD, rec.method);
            OUT("<input type=\"hidden\" name=\"method\" value=\"%s\">", rec.method);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"method\" value=\"%s\"></td></tr>", VIEW_VISITS_METHOD, VIEW_SHORT_INPUT_CLASS, rec.method);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_METHOD */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_URI
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_URI, rec.uri);
            OUT("<input type=\"hidden\" name=\"uri\" value=\"%s\">", rec.uri);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"uri\" value=\"%s\"></td></tr>", VIEW_VISITS_URI, VIEW_LONG_INPUT_CLASS, rec.uri);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_URI */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_REFERER
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_REFERER, rec.referer);
            OUT("<input type=\"hidden\" name=\"referer\" value=\"%s\">", rec.referer);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"referer\" value=\"%s\"></td></tr>", VIEW_VISITS_REFERER, VIEW_LONG_INPUT_CLASS, rec.referer);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_REFERER */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_UAGENT
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_UAGENT, rec.uagent);
            OUT("<input type=\"hidden\" name=\"uagent\" value=\"%s\">", rec.uagent);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"uagent\" value=\"%s\"></td></tr>", VIEW_VISITS_UAGENT, VIEW_LONG_INPUT_CLASS, rec.uagent);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_UAGENT */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_LANG
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_LANG, rec.lang);
            OUT("<input type=\"hidden\" name=\"lang\" value=\"%s\">", rec.lang);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"lang\" value=\"%s\"></td></tr>", VIEW_VISITS_LANG, VIEW_SHORT_INPUT_CLASS, rec.lang);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_LANG */


#ifdef VIEW_VISITS_ENUM_UA_TYPE_01_VAL   /* combo box instead of input */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_UA_TYPE
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_UA_TYPE, ua_type(ci, rec.ua_type));
            OUT("<input type=\"hidden\" name=\"ua_type\" value=\"%c\">", rec.ua_type);
#else   /* editable */

            OUT("<tr><td class=rg>%s:</td><td><select class=\"%s\" name=\"ua_type\">", VIEW_VISITS_UA_TYPE, VIEW_SHORT_INPUT_CLASS);

            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_01_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_01_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_01_DESC));
#ifdef VIEW_VISITS_ENUM_UA_TYPE_02_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_02_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_02_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_03_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_03_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_03_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_04_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_04_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_04_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_05_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_05_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_05_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_06_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_06_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_06_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_07_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_07_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_07_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_08_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_08_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_08_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_09_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_09_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_09_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_10_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_10_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_10_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_10_DESC));
#endif

            OUT("</select></td></tr>");

#endif  /* VIEW_VISITS_EDIT_READ_ONLY_UA_TYPE */

#else   /* not a combo box */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_UA_TYPE
            if ( rec.ua_type )
                OUT("<tr><td class=rg>%s:</td><td>%c</td></tr>", VIEW_VISITS_UA_TYPE, rec.ua_type);
            else
                OUT("<tr><td class=rg>%s:</td><td>No value</td></tr>", VIEW_VISITS_UA_TYPE);

            OUT("<input type=\"hidden\" name=\"ua_type\" value=\"%c\">", rec.ua_type);
#else   /* editable */
            if ( rec.ua_type )
                OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"ua_type\" value=\"%c\"></td></tr>", VIEW_VISITS_UA_TYPE, VIEW_SHORT_INPUT_CLASS, rec.ua_type);
            else
                OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"ua_type\"></td></tr>", VIEW_VISITS_UA_TYPE, VIEW_SHORT_INPUT_CLASS);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_UA_TYPE */

#endif  /* VIEW_VISITS_ENUM_UA_TYPE_01_VAL */


#ifdef VIEW_VISITS_ENUM_BOT_01_VAL   /* combo box instead of input */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_BOT
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_BOT, bot(ci, rec.bot));
            OUT("<input type=\"hidden\" name=\"bot\" value=\"%c\">", rec.bot);
#else   /* editable */

            OUT("<tr><td class=rg>%s:</td><td><select class=\"%s\" name=\"bot\">", VIEW_VISITS_BOT, VIEW_SHORT_INPUT_CLASS);

            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_01_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_01_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_01_DESC));
#ifdef VIEW_VISITS_ENUM_BOT_02_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_02_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_02_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_03_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_03_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_03_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_04_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_04_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_04_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_05_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_05_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_05_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_06_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_06_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_06_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_07_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_07_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_07_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_08_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_08_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_08_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_09_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_09_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_09_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_10_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_10_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_10_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_10_DESC));
#endif

            OUT("</select></td></tr>");

#endif  /* VIEW_VISITS_EDIT_READ_ONLY_BOT */

#else   /* not a combo box */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_BOT
            if ( rec.bot )
                OUT("<tr><td class=rg>%s:</td><td>%c</td></tr>", VIEW_VISITS_BOT, rec.bot);
            else
                OUT("<tr><td class=rg>%s:</td><td>No value</td></tr>", VIEW_VISITS_BOT);

            OUT("<input type=\"hidden\" name=\"bot\" value=\"%c\">", rec.bot);
#else   /* editable */
            if ( rec.bot )
                OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"bot\" value=\"%c\"></td></tr>", VIEW_VISITS_BOT, VIEW_SHORT_INPUT_CLASS, rec.bot);
            else
                OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"bot\"></td></tr>", VIEW_VISITS_BOT, VIEW_SHORT_INPUT_CLASS);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_BOT */

#endif  /* VIEW_VISITS_ENUM_BOT_01_VAL */


#ifdef VIEW_VISITS_ENUM_AD_01_VAL   /* combo box instead of input */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_AD
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_AD, ad(ci, rec.ad));
            OUT("<input type=\"hidden\" name=\"ad\" value=\"%c\">", rec.ad);
#else   /* editable */

            OUT("<tr><td class=rg>%s:</td><td><select class=\"%s\" name=\"ad\">", VIEW_VISITS_AD, VIEW_SHORT_INPUT_CLASS);

            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_01_VAL, rec.ad==VIEW_VISITS_ENUM_AD_01_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_01_DESC));
#ifdef VIEW_VISITS_ENUM_AD_02_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_02_VAL, rec.ad==VIEW_VISITS_ENUM_AD_02_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_03_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_03_VAL, rec.ad==VIEW_VISITS_ENUM_AD_03_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_04_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_04_VAL, rec.ad==VIEW_VISITS_ENUM_AD_04_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_05_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_05_VAL, rec.ad==VIEW_VISITS_ENUM_AD_05_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_06_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_06_VAL, rec.ad==VIEW_VISITS_ENUM_AD_06_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_07_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_07_VAL, rec.ad==VIEW_VISITS_ENUM_AD_07_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_08_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_08_VAL, rec.ad==VIEW_VISITS_ENUM_AD_08_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_09_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_09_VAL, rec.ad==VIEW_VISITS_ENUM_AD_09_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_10_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_10_VAL, rec.ad==VIEW_VISITS_ENUM_AD_10_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_10_DESC));
#endif

            OUT("</select></td></tr>");

#endif  /* VIEW_VISITS_EDIT_READ_ONLY_AD */

#else   /* not a combo box */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_AD
            if ( rec.ad )
                OUT("<tr><td class=rg>%s:</td><td>%c</td></tr>", VIEW_VISITS_AD, rec.ad);
            else
                OUT("<tr><td class=rg>%s:</td><td>No value</td></tr>", VIEW_VISITS_AD);

            OUT("<input type=\"hidden\" name=\"ad\" value=\"%c\">", rec.ad);
#else   /* editable */
            if ( rec.ad )
                OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"ad\" value=\"%c\"></td></tr>", VIEW_VISITS_AD, VIEW_SHORT_INPUT_CLASS, rec.ad);
            else
                OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"ad\"></td></tr>", VIEW_VISITS_AD, VIEW_SHORT_INPUT_CLASS);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_AD */

#endif  /* VIEW_VISITS_ENUM_AD_01_VAL */


#ifdef VIEW_VISITS_EDIT_READ_ONLY_SESSION_ID
            OUT("<tr><td class=rg>%s:</td><td>%d</td></tr>", VIEW_VISITS_SESSION_ID, rec.session_id);
            OUT("<input type=\"hidden\" name=\"session_id\" value=\"%d\">", rec.session_id);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"session_id\" value=\"%d\"></td></tr>", VIEW_VISITS_SESSION_ID, VIEW_SHORT_INPUT_CLASS, rec.session_id);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_SESSION_ID */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_STATUS
            OUT("<tr><td class=rg>%s:</td><td>%d</td></tr>", VIEW_VISITS_STATUS, rec.status);
            OUT("<input type=\"hidden\" name=\"status\" value=\"%d\">", rec.status);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"status\" value=\"%d\"></td></tr>", VIEW_VISITS_STATUS, VIEW_SHORT_INPUT_CLASS, rec.status);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_STATUS */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_PROCESSING
            OUT("<tr><td class=rg>%s:</td><td>%f</td></tr>", VIEW_VISITS_PROCESSING, rec.processing);
            OUT("<input type=\"hidden\" name=\"processing\" value=\"%f\">", rec.processing);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"processing\" value=\"%f\"></td></tr>", VIEW_VISITS_PROCESSING, VIEW_SHORT_INPUT_CLASS, rec.processing);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_PROCESSING */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_CREATED
            OUT("<tr><td class=rg>%s:</td><td>%s</td></tr>", VIEW_VISITS_CREATED, rec.created);
            OUT("<input type=\"hidden\" name=\"created\" value=\"%s\">", rec.created);
#else   /* editable */
            OUT("<tr><td class=rg>%s:</td><td><input class=\"%s\" name=\"created\" value=\"%s\"></td></tr>", VIEW_VISITS_CREATED, VIEW_SHORT_INPUT_CLASS, rec.created);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_CREATED */
        }
        else    /* REQ_MOB */
        {
            if ( edit )   /* auto_increment = read-only */
                OUT("<tr><td><span class=g>%s:</span><br>%d</td></tr>", VIEW_VISITS_ID, rec.id);


#ifdef VIEW_VISITS_EDIT_READ_ONLY_IP
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_IP, rec.ip);
            OUT("<input type=\"hidden\" name=\"ip\" value=\"%s\">", rec.ip);
#else   /* editable */
#ifdef VIEW_VISITS_EDIT_BEFORE_COLUMNS
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"ip\" value=\"%s\"></td></tr>", VIEW_VISITS_IP, rec.ip);
#else   /* autofocus */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"ip\" value=\"%s\" autofocus></td></tr>", VIEW_VISITS_IP, rec.ip);
#endif
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_IP */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_COUNTRY_CODE
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_COUNTRY_CODE, rec.country_code);
            OUT("<input type=\"hidden\" name=\"country_code\" value=\"%s\">", rec.country_code);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"country_code\" value=\"%s\"></td></tr>", VIEW_VISITS_COUNTRY_CODE, rec.country_code);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_COUNTRY_CODE */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_REGION_NAME
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_REGION_NAME, rec.region_name);
            OUT("<input type=\"hidden\" name=\"region_name\" value=\"%s\">", rec.region_name);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"region_name\" value=\"%s\"></td></tr>", VIEW_VISITS_REGION_NAME, rec.region_name);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_REGION_NAME */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_CITY_NAME
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_CITY_NAME, rec.city_name);
            OUT("<input type=\"hidden\" name=\"city_name\" value=\"%s\">", rec.city_name);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"city_name\" value=\"%s\"></td></tr>", VIEW_VISITS_CITY_NAME, rec.city_name);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_CITY_NAME */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_METHOD
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_METHOD, rec.method);
            OUT("<input type=\"hidden\" name=\"method\" value=\"%s\">", rec.method);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"method\" value=\"%s\"></td></tr>", VIEW_VISITS_METHOD, rec.method);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_METHOD */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_URI
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_URI, rec.uri);
            OUT("<input type=\"hidden\" name=\"uri\" value=\"%s\">", rec.uri);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"uri\" value=\"%s\"></td></tr>", VIEW_VISITS_URI, rec.uri);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_URI */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_REFERER
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_REFERER, rec.referer);
            OUT("<input type=\"hidden\" name=\"referer\" value=\"%s\">", rec.referer);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"referer\" value=\"%s\"></td></tr>", VIEW_VISITS_REFERER, rec.referer);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_REFERER */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_UAGENT
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_UAGENT, rec.uagent);
            OUT("<input type=\"hidden\" name=\"uagent\" value=\"%s\">", rec.uagent);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"uagent\" value=\"%s\"></td></tr>", VIEW_VISITS_UAGENT, rec.uagent);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_UAGENT */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_LANG
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_LANG, rec.lang);
            OUT("<input type=\"hidden\" name=\"lang\" value=\"%s\">", rec.lang);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"lang\" value=\"%s\"></td></tr>", VIEW_VISITS_LANG, rec.lang);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_LANG */


#ifdef VIEW_VISITS_ENUM_UA_TYPE_01_VAL   /* combo box instead of input */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_UA_TYPE
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_UA_TYPE, ua_type(ci, rec.ua_type));
            OUT("<input type=\"hidden\" name=\"ua_type\" value=\"%c\">", rec.ua_type);
#else   /* editable */

            OUT("<tr><td><span class=g>%s:</span><br><select class=w100p name=\"ua_type\">", VIEW_VISITS_UA_TYPE);

            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_01_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_01_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_01_DESC));
#ifdef VIEW_VISITS_ENUM_UA_TYPE_02_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_02_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_02_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_03_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_03_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_03_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_04_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_04_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_04_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_05_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_05_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_05_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_06_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_06_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_06_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_07_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_07_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_07_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_08_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_08_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_08_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_09_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_09_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_09_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_UA_TYPE_10_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_UA_TYPE_10_VAL, rec.ua_type==VIEW_VISITS_ENUM_UA_TYPE_10_VAL?" selected":"", STR(VIEW_VISITS_ENUM_UA_TYPE_10_DESC));
#endif

            OUT("</select></td></tr>");

#endif  /* VIEW_VISITS_EDIT_READ_ONLY_UA_TYPE */

#else   /* not a combo box */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_UA_TYPE
            if ( rec.ua_type )
                OUT("<tr><td><span class=g>%s:</span><br>%c</td></tr>", VIEW_VISITS_UA_TYPE, rec.ua_type);
            else
                OUT("<tr><td><span class=g>%s:</span><br>No value</td></tr>", VIEW_VISITS_UA_TYPE);

            OUT("<input type=\"hidden\" name=\"ua_type\" value=\"%c\">", rec.ua_type);
#else   /* editable */
            if ( rec.ua_type )
                OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"ua_type\" value=\"%c\"></td></tr>", VIEW_VISITS_UA_TYPE, rec.ua_type);
            else
                OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"ua_type\"></td></tr>", VIEW_VISITS_UA_TYPE);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_UA_TYPE */

#endif  /* VIEW_VISITS_ENUM_UA_TYPE_01_VAL */


#ifdef VIEW_VISITS_ENUM_BOT_01_VAL   /* combo box instead of input */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_BOT
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_BOT, bot(ci, rec.bot));
            OUT("<input type=\"hidden\" name=\"bot\" value=\"%c\">", rec.bot);
#else   /* editable */

            OUT("<tr><td><span class=g>%s:</span><br><select class=w100p name=\"bot\">", VIEW_VISITS_BOT);

            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_01_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_01_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_01_DESC));
#ifdef VIEW_VISITS_ENUM_BOT_02_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_02_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_02_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_03_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_03_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_03_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_04_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_04_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_04_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_05_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_05_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_05_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_06_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_06_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_06_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_07_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_07_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_07_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_08_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_08_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_08_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_09_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_09_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_09_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_BOT_10_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_BOT_10_VAL, rec.bot==VIEW_VISITS_ENUM_BOT_10_VAL?" selected":"", STR(VIEW_VISITS_ENUM_BOT_10_DESC));
#endif

            OUT("</select></td></tr>");

#endif  /* VIEW_VISITS_EDIT_READ_ONLY_BOT */

#else   /* not a combo box */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_BOT
            if ( rec.bot )
                OUT("<tr><td><span class=g>%s:</span><br>%c</td></tr>", VIEW_VISITS_BOT, rec.bot);
            else
                OUT("<tr><td><span class=g>%s:</span><br>No value</td></tr>", VIEW_VISITS_BOT);

            OUT("<input type=\"hidden\" name=\"bot\" value=\"%c\">", rec.bot);
#else   /* editable */
            if ( rec.bot )
                OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"bot\" value=\"%c\"></td></tr>", VIEW_VISITS_BOT, rec.bot);
            else
                OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"bot\"></td></tr>", VIEW_VISITS_BOT);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_BOT */

#endif  /* VIEW_VISITS_ENUM_BOT_01_VAL */


#ifdef VIEW_VISITS_ENUM_AD_01_VAL   /* combo box instead of input */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_AD
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_AD, ad(ci, rec.ad));
            OUT("<input type=\"hidden\" name=\"ad\" value=\"%c\">", rec.ad);
#else   /* editable */

            OUT("<tr><td><span class=g>%s:</span><br><select class=w100p name=\"ad\">", VIEW_VISITS_AD);

            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_01_VAL, rec.ad==VIEW_VISITS_ENUM_AD_01_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_01_DESC));
#ifdef VIEW_VISITS_ENUM_AD_02_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_02_VAL, rec.ad==VIEW_VISITS_ENUM_AD_02_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_02_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_03_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_03_VAL, rec.ad==VIEW_VISITS_ENUM_AD_03_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_03_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_04_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_04_VAL, rec.ad==VIEW_VISITS_ENUM_AD_04_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_04_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_05_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_05_VAL, rec.ad==VIEW_VISITS_ENUM_AD_05_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_05_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_06_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_06_VAL, rec.ad==VIEW_VISITS_ENUM_AD_06_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_06_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_07_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_07_VAL, rec.ad==VIEW_VISITS_ENUM_AD_07_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_07_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_08_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_08_VAL, rec.ad==VIEW_VISITS_ENUM_AD_08_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_08_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_09_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_09_VAL, rec.ad==VIEW_VISITS_ENUM_AD_09_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_09_DESC));
#endif
#ifdef VIEW_VISITS_ENUM_AD_10_VAL
            OUT("<option value=\"%c\"%s>%s</option>", VIEW_VISITS_ENUM_AD_10_VAL, rec.ad==VIEW_VISITS_ENUM_AD_10_VAL?" selected":"", STR(VIEW_VISITS_ENUM_AD_10_DESC));
#endif

            OUT("</select></td></tr>");

#endif  /* VIEW_VISITS_EDIT_READ_ONLY_AD */

#else   /* not a combo box */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_AD
            if ( rec.ad )
                OUT("<tr><td><span class=g>%s:</span><br>%c</td></tr>", VIEW_VISITS_AD, rec.ad);
            else
                OUT("<tr><td><span class=g>%s:</span><br>No value</td></tr>", VIEW_VISITS_AD);

            OUT("<input type=\"hidden\" name=\"ad\" value=\"%c\">", rec.ad);
#else   /* editable */
            if ( rec.ad )
                OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"ad\" value=\"%c\"></td></tr>", VIEW_VISITS_AD, rec.ad);
            else
                OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"ad\"></td></tr>", VIEW_VISITS_AD);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_AD */

#endif  /* VIEW_VISITS_ENUM_AD_01_VAL */


#ifdef VIEW_VISITS_EDIT_READ_ONLY_SESSION_ID
            OUT("<tr><td><span class=g>%s:</span><br>%d</td></tr>", VIEW_VISITS_SESSION_ID, rec.session_id);
            OUT("<input type=\"hidden\" name=\"session_id\" value=\"%d\">", rec.session_id);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"session_id\" value=\"%d\"></td></tr>", VIEW_VISITS_SESSION_ID, rec.session_id);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_SESSION_ID */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_STATUS
            OUT("<tr><td><span class=g>%s:</span><br>%d</td></tr>", VIEW_VISITS_STATUS, rec.status);
            OUT("<input type=\"hidden\" name=\"status\" value=\"%d\">", rec.status);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"status\" value=\"%d\"></td></tr>", VIEW_VISITS_STATUS, rec.status);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_STATUS */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_PROCESSING
            OUT("<tr><td><span class=g>%s:</span><br>%f</td></tr>", VIEW_VISITS_PROCESSING, rec.processing);
            OUT("<input type=\"hidden\" name=\"processing\" value=\"%f\">", rec.processing);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"processing\" value=\"%f\"></td></tr>", VIEW_VISITS_PROCESSING, rec.processing);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_PROCESSING */

#ifdef VIEW_VISITS_EDIT_READ_ONLY_CREATED
            OUT("<tr><td><span class=g>%s:</span><br>%s</td></tr>", VIEW_VISITS_CREATED, rec.created);
            OUT("<input type=\"hidden\" name=\"created\" value=\"%s\">", rec.created);
#else   /* editable */
            OUT("<tr><td><span class=g>%s:</span><br><input class=w100p name=\"created\" value=\"%s\"></td></tr>", VIEW_VISITS_CREATED, rec.created);
#endif  /* VIEW_VISITS_EDIT_READ_ONLY_CREATED */
        }

#ifdef VIEW_VISITS_EDIT_AFTER_COLUMNS
        VIEW_VISITS_EDIT_AFTER_COLUMNS;
#endif

        OUT("<tr><td%s>&nbsp;</td></tr>", REQ_DSK?" colspan=2":"");

        char cancel_lnk[256];

        if ( edit )
            sprintf(cancel_lnk, "/visits?id=%d", rec.id);
        else
            sprintf(cancel_lnk, "/visits");

        OUT("<tr>%s<td><input type=\"submit\" class=\"%s\" value=\"%s\" onClick=\"wait();\"> &nbsp; <a class=\"%s\" href=\"%s\" onClick=\"wait();\">%s</a></td></tr>", REQ_DSK?"<td></td>":"", VIEW_BUTTON_CLASS, VIEW_SAVE, VIEW_LINK_CLASS, cancel_lnk, VIEW_CANCEL);
    }
    catch (std::exception& e)
    {
        ERR(e.what());
        OUT("<tr><td%s>%s</td></tr>", REQ_DSK?" colspan=2":"", e.what());
        OUT("</table>");
        OUT("</form>");
        return ERR_INT_SERVER_ERROR;
    }

    OUT("</table>");
    OUT("</form>");

    return OK;
}


/* ---------------------------------------------------------------------------
   Remove record confirmation screen
--------------------------------------------------------------------------- */
static int render_remove(int ci)
{
    bool permitted=false;    /* on the table level */

    if ( US.auth_level >= AUTH_LEVEL_ADMIN )
        permitted = true;
    else if ( US.auth_level >= VISITS_AUTH_MID_LEVEL && IS_AUTH_DELETE(VISITS_AUTH_MID_ACCESS) )
        permitted = true;
    else if ( US.auth_level >= VISITS_AUTH_LOW_LEVEL && IS_AUTH_DELETE(VISITS_AUTH_LOW_ACCESS) )
        permitted = true;
    else if ( IS_AUTH_DELETE(VISITS_AUTH_PUBLIC_ACCESS) )
        permitted = true;

    if ( !permitted )
    {
        WAR("render_remove: Not permitted (table level)");
        OUT("<p>%s</p>", VIEW_NO_RECORDS);
        return ERR_RECORD_NOT_FOUND;
    }

    try
    {
static Cvisits rec;

        if ( !get_key(ci, rec) )
            return ERR_INVALID_REQUEST;

        /* No restrictions on the record level */

        OUT("<form action=\"/visits/do_remove\" method=\"POST\">");
        OUT_CSRFT;
        OUT("<input type=\"hidden\" name=\"id\" value=\"%d\">", rec.id);
        OUT("<p>%s</p>", VIEW_REMOVE_CONFIRMATION);
        OUT("<p></p>");
        OUT("<p><input type=\"submit\" class=\"%s\" value=\"%s\" onClick=\"wait();\"> &nbsp; <a class=\"%s\" href=\"/visits?id=%d\">%s</a></p>", VIEW_BUTTON_CLASS, VIEW_REMOVE, VIEW_LINK_CLASS, rec.id, VIEW_CANCEL);
        OUT("</form>");
    }
    catch (std::exception& e)
    {
        ERR(e.what());
        OUT("<p>%s</p>", e.what());
        return ERR_INT_SERVER_ERROR;
    }

    return OK;
}


/* ---------------------------------------------------------------------------
   Save record
--------------------------------------------------------------------------- */
static int do_save(int ci)
{
    int ret;

    if ( !CSRFT_OK )
    {
        WAR("do_save: CSRFT validation failed");
        return ERR_CSRFT;
    }

    bool edit=false;

    QSB("_edit_flag_", &edit);

    bool permitted=false;    /* on the table level */

    if ( US.auth_level >= AUTH_LEVEL_ADMIN )
        permitted = true;
    else if ( US.auth_level >= VISITS_AUTH_MID_LEVEL && ((edit && IS_AUTH_UPDATE(VISITS_AUTH_MID_ACCESS)) || (!edit && IS_AUTH_CREATE(VISITS_AUTH_MID_ACCESS))) )
        permitted = true;
    else if ( US.auth_level >= VISITS_AUTH_LOW_LEVEL && ((edit && IS_AUTH_UPDATE(VISITS_AUTH_LOW_ACCESS)) || (!edit && IS_AUTH_CREATE(VISITS_AUTH_LOW_ACCESS))) )
        permitted = true;
    else if ( ((edit && IS_AUTH_UPDATE(VISITS_AUTH_PUBLIC_ACCESS)) || (!edit && IS_AUTH_CREATE(VISITS_AUTH_PUBLIC_ACCESS))) )
        permitted = true;

    if ( !permitted )
    {
        WAR("do_save: Not permitted (table level)");
        RES_LOCATION("/visits");
        return ERR_RECORD_NOT_FOUND;
    }

    try
    {
static Cvisits rec;

        /* get record from payload */

        if ( (ret=get_rec(ci, rec)) != OK )
        {
            WAR("do_save: Couldn't get record from payload");
            RES_LOCATION("/visits");
            return ret;
        }

        /* No restrictions on the record level */

#ifdef VIEW_VISITS_ON_SAVE
        VIEW_VISITS_ON_SAVE;
#endif

        if ( edit )
            rec.Update(rec.id);
        else
            rec.Insert();

        RES_LOCATION("/visits?id=%d", rec.id);
    }
    catch (std::exception& e)
    {
        ERR(e.what());
        OUT("<p>%s</p>", e.what());
        return ERR_INT_SERVER_ERROR;
    }

    return OK;
}


/* ---------------------------------------------------------------------------
   Remove record
--------------------------------------------------------------------------- */
static int do_remove(int ci)
{
    if ( !CSRFT_OK )
    {
        WAR("do_remove: CSRFT validation failed");
        return ERR_CSRFT;
    }

    bool permitted=false;    /* on the table level */

    if ( US.auth_level >= AUTH_LEVEL_ADMIN )
        permitted = true;
    else if ( US.auth_level >= VISITS_AUTH_MID_LEVEL && IS_AUTH_DELETE(VISITS_AUTH_MID_ACCESS) )
        permitted = true;
    else if ( US.auth_level >= VISITS_AUTH_LOW_LEVEL && IS_AUTH_DELETE(VISITS_AUTH_LOW_ACCESS) )
        permitted = true;
    else if ( IS_AUTH_DELETE(VISITS_AUTH_PUBLIC_ACCESS) )
        permitted = true;

    if ( !permitted )
    {
        WAR("do_remove: Not permitted (table level)");
        RES_LOCATION("/visits");
        return ERR_RECORD_NOT_FOUND;
    }

    try
    {
static Cvisits rec;

        if ( !get_key(ci, rec) )
            return ERR_INVALID_REQUEST;

        /* No restrictions on the record level */

#ifdef VIEW_VISITS_ON_REMOVE
        VIEW_VISITS_ON_REMOVE;
#endif

        rec.Delete(rec.id);

        RES_LOCATION("/visits");
    }
    catch (std::exception& e)
    {
        ERR(e.what());
        OUT("<p>%s</p>", e.what());
        return ERR_INT_SERVER_ERROR;
    }

    return OK;
}


/* ---------------------------------------------------------------------------
   visits's View
--------------------------------------------------------------------------- */
void visits_view(int ci)
{
    int ret;

    if ( REQ1("edit") )
        ret = render_edit(ci);
    else if ( REQ1("remove") )
        ret = render_remove(ci);
    else if ( REQ1("do_save") && REQ_POST )
        ret = do_save(ci);
    else if ( REQ1("do_remove") && REQ_POST )
        ret = do_remove(ci);
    else
        ret = render_show(ci);

    if ( ret != OK && ret != ERR_RECORD_NOT_FOUND )
    {
        if ( ret == ERR_INVALID_REQUEST )
            RES_STATUS(400);
        else if ( ret == ERR_UNAUTHORIZED )
            RES_STATUS(401);
        else if ( ret == ERR_CSRFT )
            RES_STATUS(403);
        else if ( ret == ERR_NOT_FOUND )
            RES_STATUS(404);
        else
            RES_STATUS(500);
    }

    RES_DONT_CACHE;
}
