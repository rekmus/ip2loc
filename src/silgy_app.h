/* --------------------------------------------------------------------------
   Silgy Web App
   Jurek Muszynski
   silgy.com
-----------------------------------------------------------------------------
   Hello World Sample Silgy Web Application
-------------------------------------------------------------------------- */

#ifndef SILGY_APP_H
#define SILGY_APP_H


#define APP_WEBSITE                         "IP2Location Silgy Demo"
#define APP_DOMAIN                          "silgy.org"
#define APP_DESCRIPTION                     "Hello World Sample Silgy Web Application"
#define APP_VERSION                         "1.0"


#define DBMYSQL
#define DBMYSQLRECONNECT
#define ASYNC


#define RESMIN_VERSION                      1


#define ONKEYDOWN                           "onkeydown=\"ent(event);\""
#define WAIT                                "onclick=\"wait();\""


#define VISITS_AUTH_PUBLIC_ACCESS           AUTH_READ

#define VIEW_VISITS_IP                      "IP"
#define VIEW_VISITS_COUNTRY_CODE            "Country"
#define VIEW_VISITS_REGION_NAME             "Region"
#define VIEW_VISITS_CITY_NAME               "City"
#define VIEW_VISITS_URI                     "URI"
#define VIEW_VISITS_UA_TYPE                 "User Agent"
#define VIEW_VISITS_SESSION_ID              "Session"

#define VIEW_VISITS_LIST_DISABLE_NEW

//#define VIEW_VISITS_LIST_DSK_HIDE_METHOD
#define VIEW_VISITS_LIST_DSK_HIDE_REFERER
#define VIEW_VISITS_LIST_DSK_HIDE_UAGENT
#define VIEW_VISITS_LIST_DSK_HIDE_LANG
#define VIEW_VISITS_LIST_DSK_HIDE_BOT
#define VIEW_VISITS_LIST_DSK_HIDE_STATUS
#define VIEW_VISITS_LIST_DSK_HIDE_PROCESSING
#define VIEW_VISITS_LIST_DSK_HIDE_SESSION_ID
#define VIEW_VISITS_LIST_DSK_HIDE_AD

#define VIEW_VISITS_LIST_MOB_HIDE_ID
#define VIEW_VISITS_LIST_MOB_HIDE_METHOD
#define VIEW_VISITS_LIST_MOB_HIDE_REFERER
#define VIEW_VISITS_LIST_MOB_HIDE_UAGENT
#define VIEW_VISITS_LIST_MOB_HIDE_LANG
#define VIEW_VISITS_LIST_MOB_HIDE_BOT
#define VIEW_VISITS_LIST_MOB_HIDE_STATUS
#define VIEW_VISITS_LIST_MOB_HIDE_PROCESSING
#define VIEW_VISITS_LIST_MOB_HIDE_SESSION_ID
#define VIEW_VISITS_LIST_MOB_HIDE_AD
#define VIEW_VISITS_LIST_MOB_HIDE_UA_TYPE
#define VIEW_VISITS_LIST_MOB_HIDE_URI

#define VIEW_VISITS_ENUM_UA_TYPE_01_VAL         'D'
#define VIEW_VISITS_ENUM_UA_TYPE_01_DESC        "Desktop"
#define VIEW_VISITS_ENUM_UA_TYPE_02_VAL         'M'
#define VIEW_VISITS_ENUM_UA_TYPE_02_DESC        "Mobile"

#define VIEW_VISITS_ENUM_BOT_01_VAL             'N'
#define VIEW_VISITS_ENUM_BOT_01_DESC            "No"
#define VIEW_VISITS_ENUM_BOT_02_VAL             'Y'
#define VIEW_VISITS_ENUM_BOT_02_DESC            "Yes"


/* app user session */

typedef struct {
    char dummy;     // replace with your own struct members
} ausession_t;


#endif  /* SILGY_APP_H */
