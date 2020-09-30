/* ---------------------------------------------------------------------------
   Table access class
   Generated on silgy.org on 2020-05-30 11:13:49, generator v.1.0.0
   Using C-style strings
   Using exceptions
--------------------------------------------------------------------------- */

#ifndef CIP2LOCATION_DB3_H
#define CIP2LOCATION_DB3_H


#include <Cdb.h>


typedef char IP2LOCATION_DB3_COUNTRY_CODE[2+1];
typedef char IP2LOCATION_DB3_COUNTRY_NAME[64+1];
typedef char IP2LOCATION_DB3_REGION_NAME[128+1];
typedef char IP2LOCATION_DB3_CITY_NAME[128+1];


typedef struct
{
    unsigned                     ip_from;
    unsigned                     ip_to;
    IP2LOCATION_DB3_COUNTRY_CODE country_code;
    IP2LOCATION_DB3_COUNTRY_NAME country_name;
    IP2LOCATION_DB3_REGION_NAME  region_name;
    IP2LOCATION_DB3_CITY_NAME    city_name;
} IP2LOCATION_DB3_REC;


class Cip2location_db3 : public IP2LOCATION_DB3_REC, public Cdb
{
public:
    Cip2location_db3();
    ~Cip2location_db3();

    // Get the next record
    // Return false if end of record set
    bool Fetch();

    // Get one record by PK
    // Not Found will return false
    bool Get(unsigned arg_ip_from);

    // Insert record
    unsigned Insert();

    // Update record by PK
    void Update(unsigned arg_ip_from);

    // Delete record by PK
    void Delete(unsigned arg_ip_from);

    // Insert or update record by PK
    void Set(unsigned arg_ip_from);

    // Reset all values
    void Reset();


private:
static bool slots_[CDB_MAX_INSTANCES];

    int k_ip_from_;

    unsigned long country_code_len_;
    unsigned long country_name_len_;
    unsigned long region_name_len_;
    unsigned long city_name_len_;


    my_bool ip_from_is_null_;
    my_bool ip_to_is_null_;
    my_bool country_code_is_null_;
    my_bool country_name_is_null_;
    my_bool region_name_is_null_;
    my_bool city_name_is_null_;

    MYSQL_BIND bndk_[1];
    MYSQL_BIND bndi_[7];
    MYSQL_BIND bndo_[6];

    void bindKey(MYSQL_STMT *s, unsigned arg_ip_from);
    void bindInput(MYSQL_STMT *s, bool withKey=false, unsigned arg_ip_from=0);
    void bindOutput(MYSQL_STMT *s);
    void bindSetOutput();

    void convSC();
    void genDTStrings();
};


#endif  /* CIP2LOCATION_DB3_H */
