/* ---------------------------------------------------------------------------
   Silgy View
   Generated on silgy.org on 2020-05-30 11:25:59, generator v.1.0.0
--------------------------------------------------------------------------- */

#ifndef VISITS_VIEW_H
#define VISITS_VIEW_H


#include "Cvisits.h"


/* Authorization */

#ifndef VISITS_AUTH_MID_LEVEL
#define VISITS_AUTH_MID_LEVEL           AUTH_LEVEL_NONE
#endif

#ifndef VISITS_AUTH_MID_ACCESS
#define VISITS_AUTH_MID_ACCESS          AUTH_NONE
#endif

#ifndef VISITS_AUTH_LOW_LEVEL
#define VISITS_AUTH_LOW_LEVEL           AUTH_LEVEL_NONE
#endif

#ifndef VISITS_AUTH_LOW_ACCESS
#define VISITS_AUTH_LOW_ACCESS          AUTH_NONE
#endif

#ifndef VISITS_AUTH_PUBLIC_ACCESS
#define VISITS_AUTH_PUBLIC_ACCESS       AUTH_NONE
#endif

/*
   CSS classes' names to style your view.
   Alternatively you can define them globally in silgy_app.h.
*/

#ifndef VIEW_LIST_TABLE_CLASS
#define VIEW_LIST_TABLE_CLASS           "view-list-table"
#endif
#ifndef VIEW_LIST_TABLE_TH_CLASS
#define VIEW_LIST_TABLE_TH_CLASS        "view-list-table-th"
#endif
#ifndef VIEW_DETAILS_TABLE_CLASS
#define VIEW_DETAILS_TABLE_CLASS        "view-details-table"
#endif
#ifndef VIEW_EVEN_ROW_CLASS
#define VIEW_EVEN_ROW_CLASS             "view-even-row"
#endif
#ifndef VIEW_ODD_ROW_CLASS
#define VIEW_ODD_ROW_CLASS              "view-odd-row"
#endif
#ifndef VIEW_EDIT_TABLE_CLASS
#define VIEW_EDIT_TABLE_CLASS           "view-edit-table"
#endif
#ifndef VIEW_SHORT_INPUT_CLASS
#define VIEW_SHORT_INPUT_CLASS          "view-short-input"
#endif
#ifndef VIEW_LONG_INPUT_CLASS
#define VIEW_LONG_INPUT_CLASS           "view-long-input"
#endif
#ifndef VIEW_TEXTAREA_CLASS
#define VIEW_TEXTAREA_CLASS             "view-textarea"
#endif
#ifndef VIEW_TEXTAREA_ROWS
#define VIEW_TEXTAREA_ROWS              5
#endif
#ifndef VIEW_LINK_CLASS
#define VIEW_LINK_CLASS                 "view-link"
#endif
#ifndef VIEW_BUTTON_CLASS
#define VIEW_BUTTON_CLASS               "view-button"
#endif

/* Links' labels */

#ifndef VIEW_LIST
#define VIEW_LIST                       STR("List")
#endif
#ifndef VIEW_NEW_RECORD
#define VIEW_NEW_RECORD                 STR("New record")
#endif
#ifndef VIEW_DETAILS
#define VIEW_DETAILS                    STR("Details")
#endif
#ifndef VIEW_EDIT
#define VIEW_EDIT                       STR("Edit")
#endif
#ifndef VIEW_REMOVE
#define VIEW_REMOVE                     STR("Remove")
#endif
#ifndef VIEW_SAVE
#define VIEW_SAVE                       STR("Save")
#endif
#ifndef VIEW_CANCEL
#define VIEW_CANCEL                     STR("Cancel")
#endif
#ifndef VIEW_RECORD_NOT_FOUND
#define VIEW_RECORD_NOT_FOUND           STR("Record Not Found")
#endif
#ifndef VIEW_NO_RECORDS
#define VIEW_NO_RECORDS                 STR("No Records")
#endif
#ifndef VIEW_REMOVE_CONFIRMATION
#define VIEW_REMOVE_CONFIRMATION        STR("Are you sure you want to remove this record?")
#endif

/* Columns' labels */

#ifndef VIEW_VISITS_ID
#define VIEW_VISITS_ID                  "Id"
#endif
#ifndef VIEW_VISITS_IP
#define VIEW_VISITS_IP                  "Ip"
#endif
#ifndef VIEW_VISITS_COUNTRY_CODE
#define VIEW_VISITS_COUNTRY_CODE        "Country_code"
#endif
#ifndef VIEW_VISITS_REGION_NAME
#define VIEW_VISITS_REGION_NAME         "Region_name"
#endif
#ifndef VIEW_VISITS_CITY_NAME
#define VIEW_VISITS_CITY_NAME           "City_name"
#endif
#ifndef VIEW_VISITS_METHOD
#define VIEW_VISITS_METHOD              "Method"
#endif
#ifndef VIEW_VISITS_URI
#define VIEW_VISITS_URI                 "Uri"
#endif
#ifndef VIEW_VISITS_REFERER
#define VIEW_VISITS_REFERER             "Referer"
#endif
#ifndef VIEW_VISITS_UAGENT
#define VIEW_VISITS_UAGENT              "Uagent"
#endif
#ifndef VIEW_VISITS_LANG
#define VIEW_VISITS_LANG                "Lang"
#endif
#ifndef VIEW_VISITS_UA_TYPE
#define VIEW_VISITS_UA_TYPE             "Ua_type"
#endif
#ifndef VIEW_VISITS_BOT
#define VIEW_VISITS_BOT                 "Bot"
#endif
#ifndef VIEW_VISITS_AD
#define VIEW_VISITS_AD                  "Ad"
#endif
#ifndef VIEW_VISITS_SESSION_ID
#define VIEW_VISITS_SESSION_ID          "Session_id"
#endif
#ifndef VIEW_VISITS_STATUS
#define VIEW_VISITS_STATUS              "Status"
#endif
#ifndef VIEW_VISITS_PROCESSING
#define VIEW_VISITS_PROCESSING          "Processing"
#endif
#ifndef VIEW_VISITS_CREATED
#define VIEW_VISITS_CREATED             "Created"
#endif

/* New record button text */

#ifndef VIEW_VISITS_NEW_RECORD
#define VIEW_VISITS_NEW_RECORD          VIEW_NEW_RECORD
#endif


/* Prototypes */

void visits_view(int ci);


#endif  /* VISITS_VIEW_H */
