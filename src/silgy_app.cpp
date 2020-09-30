/* --------------------------------------------------------------------------
   Silgy Web App
   Jurek Muszynski
   silgy.com
-----------------------------------------------------------------------------
   Hello World Sample Silgy Web Application
-------------------------------------------------------------------------- */


#include <silgy.h>

#include "visits_view.h"


/* --------------------------------------------------------------------------
   Output HTML & page header
-------------------------------------------------------------------------- */
void gen_header(int ci)
{
    OUT("<!DOCTYPE html>");
    OUT("<html lang=\"en\">");
    OUT("<head>");
    OUT("<meta charset=\"UTF-8\">");
    OUT("<title>%s</title>", APP_WEBSITE);
    OUT("<meta name=\"description\" content=\"%s\">", APP_DESCRIPTION);
//    OUT("<meta name=\"keywords\" content=\"%s\">", APP_KEYWORDS);
    OUT("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
    OUT("<link rel=\"stylesheet\" type=\"text/css\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css\">");
    OUT("<link rel=\"stylesheet\" type=\"text/css\" href=\"/silgy.css\">");
    OUT("<link rel=\"stylesheet\" type=\"text/css\" href=\"/%s%d.css\">", REQ_DSK?"dsk":"mob", RESMIN_VERSION);
    OUT("<script src=\"/silgy.js\"></script>");
//    OUT("<script src=\"/app%d.js\"></script>", RESMIN_VERSION);
    OUT("</head>");

    OUT("<body>");

    OUT("<div class=\"jumbotron jumbotron-fluid bg-info\">");

    OUT("<div class=\"row\">");   /* first row */


    /* -------------------------------------------------------------------------- */

    if ( REQ_DSK )
        OUT("<div class=\"col-auto\">");   /* logo col */
    else
        OUT("<div class=\"col\" style=\"padding-right:0px;\">");   /* logo col */

    if ( REQ("") || REQ("dashboard") )
        OUT("<h1 class=\"text-light\">%s</h1>", APP_WEBSITE);
    else
        OUT("<h1><a class=\"text-light\" href=\"/\" %s>%s</a></h1>", WAIT, APP_WEBSITE);

    OUT("</div>");   /* logo col */

    /* -------------------------------------------------------------------------- */


    /* -------------------------------------------------------------------------- */
    /* menu -- right part (usual Register | Login | etc.) */

//    OUT("<style>.sep{width:10px;height:2px;}</style>");

    /* div for right hand side of the top row */

//    if ( REQ("register") && REQ_MOB )
//        OUT("<div class=\"col-auto text-light text-right m05\">");
//    else
//        OUT("<div class=\"col-auto text-light text-right%s\">", REQ_DSK?" m05":"");

//    OUT("</div>");  /* col */

    /* -------------------------------------------------------------------------- */


    OUT("</div>");   /* row */


    /* -------------------------------------------------------------------------- */
    /* main menu -- second row */

    OUT("<div class=\"row m4px\">");

    if ( REQ_DSK )
        OUT("<div class=\"col text-light larger\" style=\"margin-left:24px;\">");
    else
        OUT("<div class=\"col text-light m4px mmlh\" style=\"margin-left:22px;\">");

    str1k lnk_home="<a class=text-light href=\"/\">Home</a>";
    str1k lnk_visits="<a class=text-light href=\"/visits\">Visits</a>";
    str1k lnk_about="<a class=text-light href=\"/about\">About</a>";

    if ( REQ("") )
        strcpy(lnk_home, "<b>Home</b>");
    else if ( REQ("visits") )
        strcpy(lnk_visits, "<b>Visits</b>");
    else if ( REQ("about") )
        strcpy(lnk_about, "<b>About</b>");

    OUT(lnk_home);
    OUT(" &nbsp;&nbsp; ");
    OUT(lnk_visits);
    OUT(" &nbsp;&nbsp; ");
    OUT(lnk_about);

    OUT("</div>");   /* col */

    OUT("</div>");   /* row */

    /* -------------------------------------------------------------------------- */


    OUT("</div>");   /* jumbotron */
}


/* --------------------------------------------------------------------------
   Output footer; body & html tags close here
-------------------------------------------------------------------------- */
void gen_footer(int ci)
{
    OUT("<div id=\"wait\" class=wt></div>");
    OUT("</body></html>");
}


/* --------------------------------------------------------------------------------
   Called after parsing HTTP request header
   ------------------------------
   This is the main entry point for a request
   ------------------------------
   Response status will be 200 by default
   Use RES_STATUS() if you want to change it
-------------------------------------------------------------------------------- */
void silgy_app_main(int ci)
{
    if ( REQ("") )  // landing page
    {
        gen_header(ci);
        OUT("<div id=\"mc\">");     // main content
        OUT("<p>This is the demo project for <a href=\"https://www.ip2location.com\">IP2Location</a> Contest.</p>");
        OUT("</div>");  // mc
        gen_footer(ci);
    }
    else if ( REQ("visits") )
    {
        gen_header(ci);
        OUT("<h2>Visits</h2>");
        OUT("<div id=\"mc\">");     // main content
        visits_view(ci);
        OUT("</div>");  // mc
        gen_footer(ci);
    }
    else if ( REQ("about") )
    {
        gen_header(ci);
        OUT("<h2>About</h2>");
        OUT("<div id=\"mc\">");     // main content
        OUT("<p>This is the demo project for <a href=\"https://www.ip2location.com\">IP2Location</a> Contest.</p>");
        OUT("<p>It shows visits history with location, based on <a href=\"https://lite.ip2location.com/database/ip-country\">IP2Location™ LITE IP-COUNTRY</a> free database and <a href=\"https://github.com/silgy/silgy\">Silgy</a> as a web application framework.</p>");
        OUT("</div>");  // mc
        gen_footer(ci);
    }
    else  // page not found
    {
        RES_STATUS(404);
    }

    CALL_ASYNC_NR("visits");    /* register every non-static request */
}


/* --------------------------------------------------------------------------------
   Called when application starts
   ------------------------------
   Return true if everything OK
   ------------------------------
   Returning false will stop booting process,
   silgy_app_done() will be called and application will be terminated
-------------------------------------------------------------------------------- */
bool silgy_app_init(int argc, char *argv[])
{
    Cdb::DBOpen(G_dbName, G_dbUser, G_dbPassword);

    return true;
}


/* --------------------------------------------------------------------------------
   Called when new anonymous user session starts
   ------------------------------
   Return true if everything OK
   ------------------------------
   Returning false will cause the session to be closed
   and silgy_app_session_done() will be called
   Response status will be set to 500
-------------------------------------------------------------------------------- */
bool silgy_app_session_init(int ci)
{
    return true;
}


/* --------------------------------------------------------------------------------
   ******* Only for USERS *******
   ------------------------------
   Called after successful authentication (using password or cookie)
   when user session is upgraded from anonymous to logged in
   ------------------------------
   Return true if everything OK
   ------------------------------
   Returning false will cause the session to be downgraded back to anonymous
   and silgy_app_user_logout() will be called
-------------------------------------------------------------------------------- */
bool silgy_app_user_login(int ci)
{
    return true;
}


/* --------------------------------------------------------------------------------
   ******* Only for USERS *******
   ------------------------------
   Called when downgrading logged in user session to anonymous
-------------------------------------------------------------------------------- */
void silgy_app_user_logout(int ci)
{
}


/* --------------------------------------------------------------------------------
   Called when closing anonymous user session
   After calling this the session memory will be zero-ed
-------------------------------------------------------------------------------- */
void silgy_app_session_done(int ci)
{
}


/* --------------------------------------------------------------------------------
   Called when application shuts down
-------------------------------------------------------------------------------- */
void silgy_app_done()
{
}
