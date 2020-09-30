/* ---------------------------------------------------------------------------
   Table access class
   Generated on silgy.org on 2020-05-30 10:37:38, generator v.1.0.0
   Using C-style strings
   Using exceptions
--------------------------------------------------------------------------- */

#ifndef CVISITS_H
#define CVISITS_H


#include <Cdb.h>


typedef char VISITS_IP[60+1];
typedef char VISITS_COUNTRY_CODE[2+1];
typedef char VISITS_REGION_NAME[128+1];
typedef char VISITS_CITY_NAME[128+1];
typedef char VISITS_METHOD[15+1];
typedef char VISITS_URI[250+1];
typedef char VISITS_REFERER[250+1];
typedef char VISITS_UAGENT[250+1];
typedef char VISITS_LANG[5+1];
typedef char VISITS_CREATED[19+1];


typedef struct
{
    int                 id;
    VISITS_IP           ip;
    VISITS_COUNTRY_CODE country_code;
    VISITS_REGION_NAME  region_name;
    VISITS_CITY_NAME    city_name;
    VISITS_METHOD       method;
    VISITS_URI          uri;
    VISITS_REFERER      referer;
    VISITS_UAGENT       uagent;
    VISITS_LANG         lang;
    char                ua_type;
    char                bot;
    char                ad;
    int                 session_id;
    short               status;
    float               processing;
    VISITS_CREATED      created;
} VISITS_REC;


class Cvisits : public VISITS_REC, public Cdb
{
public:
    Cvisits();
    ~Cvisits();

    // Get the next record
    // Return false if end of record set
    bool Fetch();

    // Get one record by PK
    // Not Found will return false
    bool Get(int arg_id);

    // Insert record
    unsigned Insert();

    // Update record by PK
    void Update(int arg_id);

    // Delete record by PK
    void Delete(int arg_id);

    // Insert or update record by PK
    void Set(int arg_id);

    // Reset all values
    void Reset();


private:
static bool slots_[CDB_MAX_INSTANCES];

    int k_id_;

    unsigned long ip_len_;
    unsigned long country_code_len_;
    unsigned long region_name_len_;
    unsigned long city_name_len_;
    unsigned long method_len_;
    unsigned long uri_len_;
    unsigned long referer_len_;
    unsigned long uagent_len_;
    unsigned long lang_len_;
    unsigned long ua_type_len_;
    char          s_ua_type_[2];
    unsigned long bot_len_;
    char          s_bot_[2];
    unsigned long ad_len_;
    char          s_ad_[2];
    MYSQL_TIME    t_created_;


    my_bool id_is_null_;
    my_bool ip_is_null_;
    my_bool country_code_is_null_;
    my_bool region_name_is_null_;
    my_bool city_name_is_null_;
    my_bool method_is_null_;
    my_bool uri_is_null_;
    my_bool referer_is_null_;
    my_bool uagent_is_null_;
    my_bool lang_is_null_;
    my_bool ua_type_is_null_;
    my_bool bot_is_null_;
    my_bool ad_is_null_;
    my_bool session_id_is_null_;
    my_bool status_is_null_;
    my_bool processing_is_null_;
    my_bool created_is_null_;

    MYSQL_BIND bndk_[1];
    MYSQL_BIND bndi_[18];
    MYSQL_BIND bndo_[17];

    void bindKey(MYSQL_STMT *s, int arg_id);
    void bindInput(MYSQL_STMT *s, bool withKey=false, int arg_id=0);
    void bindOutput(MYSQL_STMT *s);
    void bindSetOutput();

    void convSC();
    void genDTStrings();
};


#endif  /* CVISITS_H */
