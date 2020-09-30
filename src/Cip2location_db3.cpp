/* ---------------------------------------------------------------------------
   Table access class
   Generated on silgy.org on 2020-05-30 11:13:49, generator v.1.0.0
   Using C-style strings
   Using exceptions
--------------------------------------------------------------------------- */

#include "Cip2location_db3.h"


bool Cip2location_db3::slots_[CDB_MAX_INSTANCES]={0};


/* ---------------------------------------------------------------------------
   Constructor
--------------------------------------------------------------------------- */
Cip2location_db3::Cip2location_db3()
{
    setInstance(slots_);

    table_ = "ip2location_db3";

    columnList_ =   "ip_from,"
                    "ip_to,"
                    "country_code,"
                    "country_name,"
                    "region_name,"
                    "city_name";

    if ( !(s_=mysql_stmt_init(dbConn_)) )
        ThrowSQL("mysql_stmt_init");
    if ( !(sc_=mysql_stmt_init(dbConn_)) )
        ThrowSQL("mysql_stmt_init");
    if ( !(sGet_=mysql_stmt_init(dbConn_)) )
        ThrowSQL("mysql_stmt_init");
    if ( !(sUpdate_=mysql_stmt_init(dbConn_)) )
        ThrowSQL("mysql_stmt_init");
    if ( !(sInsert_=mysql_stmt_init(dbConn_)) )
        ThrowSQL("mysql_stmt_init");
    if ( !(sDelete_=mysql_stmt_init(dbConn_)) )
        ThrowSQL("mysql_stmt_init");
    if ( !(sSet_=mysql_stmt_init(dbConn_)) )
        ThrowSQL("mysql_stmt_init");

    Reset();
}


/* ---------------------------------------------------------------------------
   Destructor
--------------------------------------------------------------------------- */
Cip2location_db3::~Cip2location_db3()
{
    mysql_stmt_close(s_);
    mysql_stmt_close(sGet_);
    mysql_stmt_close(sUpdate_);
    mysql_stmt_close(sInsert_);
    mysql_stmt_close(sDelete_);
    mysql_stmt_close(sSet_);

    slots_[instance_] = false;
}


/* ---------------------------------------------------------------------------
   Get the next record
   Return false if end of record set
--------------------------------------------------------------------------- */
bool Cip2location_db3::Fetch()
{
    int ret;

    ret = mysql_stmt_fetch(s_);

    if ( ret != 0 )
    {
        Reset();

        if ( ret == 1 || ret == MYSQL_NO_DATA )
            return false;
        else
        {
            Cdb::ThrowSQL("Cip2location_db3::Fetch | mysql_stmt_fetch");
            return false;
        }
    }

    convSC();

    genDTStrings();

    return true;
}


/* ---------------------------------------------------------------------------
   Get record by PK
   Not Found will return false
--------------------------------------------------------------------------- */
bool Cip2location_db3::Get(unsigned arg_ip_from)
{
    int ret;

    if ( firstGet_ )
    {
        char q[SQLBUF];
        sprintf(q, "SELECT ip_from,ip_to,country_code,country_name,region_name,city_name FROM ip2location_db3 WHERE ip_from=?");
        ret = mysql_stmt_prepare(sGet_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cip2location_db3::Get | mysql_stmt_prepare");
        firstGet_ = false;
    }

    bindKey(sGet_, arg_ip_from);

    if ( mysql_stmt_execute(sGet_) )
        Cdb::ThrowSQL("Cip2location_db3::Get | mysql_stmt_execute");

    bindOutput(sGet_);

    if ( mysql_stmt_store_result(sGet_) )
        Cdb::ThrowSQL("Cip2location_db3::Get | mysql_stmt_store_result");

    ret = mysql_stmt_fetch(sGet_);

    if ( ret != 0 )
    {
        if ( ret == 1 || ret == MYSQL_NO_DATA )
            return false;
        else
            Cdb::ThrowSQL("Cip2location_db3::Get | mysql_stmt_fetch");
    }

    convSC();

    genDTStrings();

    return true;
}


/* ---------------------------------------------------------------------------
   Insert record
--------------------------------------------------------------------------- */
unsigned Cip2location_db3::Insert()
{
    int ret;

    if ( firstInsert_ )
    {
        char q[SQLBUF];
        sprintf(q, "INSERT INTO ip2location_db3 (ip_from,ip_to,country_code,country_name,region_name,city_name) VALUES (?,?,?,?,?,?)");
        ret = mysql_stmt_prepare(sInsert_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cip2location_db3::Insert | mysql_stmt_prepare");
        firstInsert_ = false;
    }

    bindInput(sInsert_);

    ret = mysql_stmt_execute(sInsert_);

    if ( ret != 0 )
        Cdb::ThrowSQL("Cip2location_db3::Insert | mysql_stmt_execute");

    return mysql_insert_id(dbConn_);
}


/* ---------------------------------------------------------------------------
   Update record by PK
--------------------------------------------------------------------------- */
void Cip2location_db3::Update(unsigned arg_ip_from)
{
    int ret;

    if ( firstUpdate_ )
    {
        char q[SQLBUF];
        sprintf(q, "UPDATE ip2location_db3 SET ip_from=?,ip_to=?,country_code=?,country_name=?,region_name=?,city_name=? WHERE ip_from=?");
        ret = mysql_stmt_prepare(sUpdate_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cip2location_db3::Update | mysql_stmt_prepare");
        firstUpdate_ = false;
    }

    bindInput(sUpdate_, true, arg_ip_from);

    ret = mysql_stmt_execute(sUpdate_);

    if ( ret != 0 )
        Cdb::ThrowSQL("Cip2location_db3::Update | mysql_stmt_execute");
}


/* ---------------------------------------------------------------------------
   Delete record by PK
--------------------------------------------------------------------------- */
void Cip2location_db3::Delete(unsigned arg_ip_from)
{
    int ret;

    if ( firstDelete_ )
    {
        char q[SQLBUF];
        sprintf(q, "DELETE FROM ip2location_db3 WHERE ip_from=?");
        ret = mysql_stmt_prepare(sDelete_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cip2location_db3::Delete | mysql_stmt_prepare");
        firstDelete_ = false;
    }

    bindKey(sDelete_, arg_ip_from);

    ret = mysql_stmt_execute(sDelete_);

    if ( ret != 0 )
        Cdb::ThrowSQL("Cip2location_db3::Delete | mysql_stmt_execute");
}


/* ---------------------------------------------------------------------------
   Insert or update record by PK
--------------------------------------------------------------------------- */
void Cip2location_db3::Set(unsigned arg_ip_from)
{
    int ret;

    if ( firstSet_ )
    {
        char q[SQLBUF];
        sprintf(q, "SELECT ip_from FROM ip2location_db3 WHERE ip_from=?");
        ret = mysql_stmt_prepare(sSet_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cip2location_db3::Set | mysql_stmt_prepare");
        firstSet_ = false;
    }

    bindKey(sSet_, arg_ip_from);

    if ( mysql_stmt_execute(sSet_) )
        Cdb::ThrowSQL("Cip2location_db3::Set | mysql_stmt_execute");

    bindSetOutput();

    if ( mysql_stmt_store_result(sSet_) )
        Cdb::ThrowSQL("Cip2location_db3::Set | mysql_stmt_store_result");

    ret = mysql_stmt_fetch(sSet_);

    if ( ret == 0 )   /* record existed */
    {
        Update(arg_ip_from);
    }
    else if ( ret == 1 || ret == MYSQL_NO_DATA )   /* not found ==> insert new */
    {
        ip_from = arg_ip_from;

        Insert();
    }
    else
        Cdb::ThrowSQL("Cip2location_db3::Set | mysql_stmt_fetch");
}


/* ---------------------------------------------------------------------------
   Bind key values
--------------------------------------------------------------------------- */
void Cip2location_db3::bindKey(MYSQL_STMT *s, unsigned arg_ip_from)
{
    k_ip_from_ = arg_ip_from;

    memset(&bndk_, 0, sizeof(bndk_));

    bndk_[0].buffer_type = MYSQL_TYPE_LONG;
    bndk_[0].buffer = (char*)&k_ip_from_;
    bndk_[0].is_unsigned = true;

    if ( mysql_stmt_bind_param(s, bndk_) )
        Cdb::ThrowSQL("Cip2location_db3::bindKey | mysql_stmt_bind_param");
}


/* ---------------------------------------------------------------------------
   Bind input values
--------------------------------------------------------------------------- */
void Cip2location_db3::bindInput(MYSQL_STMT *s, bool withKey, unsigned arg_ip_from)
{
    country_code_len_ = strlen(country_code);
    country_name_len_ = strlen(country_name);
    region_name_len_ = strlen(region_name);
    city_name_len_ = strlen(city_name);


    memset(&bndi_, 0, sizeof(bndi_));

    bndi_[0].buffer_type = MYSQL_TYPE_LONG;
    bndi_[0].buffer = (char*)&ip_from;
    bndi_[0].is_unsigned = true;

    bndi_[1].buffer_type = MYSQL_TYPE_LONG;
    bndi_[1].buffer = (char*)&ip_to;
    bndi_[1].is_unsigned = true;

    bndi_[2].buffer_type = MYSQL_TYPE_STRING;
    bndi_[2].buffer = (char*)country_code;
    bndi_[2].length = &country_code_len_;

    bndi_[3].buffer_type = MYSQL_TYPE_STRING;
    bndi_[3].buffer = (char*)country_name;
    bndi_[3].length = &country_name_len_;

    bndi_[4].buffer_type = MYSQL_TYPE_STRING;
    bndi_[4].buffer = (char*)region_name;
    bndi_[4].length = &region_name_len_;

    bndi_[5].buffer_type = MYSQL_TYPE_STRING;
    bndi_[5].buffer = (char*)city_name;
    bndi_[5].length = &city_name_len_;

    if ( withKey )   /* after WHERE */
    {
        k_ip_from_ = arg_ip_from;

        bndi_[6].buffer_type = MYSQL_TYPE_LONG;
        bndi_[6].buffer = (char*)&k_ip_from_;
        bndi_[6].is_unsigned = true;

    }

    if ( mysql_stmt_bind_param(s, bndi_) )
        Cdb::ThrowSQL("Cip2location_db3::bindInput | mysql_stmt_bind_param");
}


/* ---------------------------------------------------------------------------
   Bind output values
--------------------------------------------------------------------------- */
void Cip2location_db3::bindOutput(MYSQL_STMT *s)
{
    memset(&bndo_, 0, sizeof(bndo_));

    bndo_[0].buffer_type = MYSQL_TYPE_LONG;
    bndo_[0].buffer = (char*)&ip_from;
    bndo_[0].is_null = &ip_from_is_null_;
    bndo_[0].is_unsigned = true;

    bndo_[1].buffer_type = MYSQL_TYPE_LONG;
    bndo_[1].buffer = (char*)&ip_to;
    bndo_[1].is_null = &ip_to_is_null_;
    bndo_[1].is_unsigned = true;

    bndo_[2].buffer_type = MYSQL_TYPE_STRING;
    bndo_[2].buffer = (char*)country_code;
    bndo_[2].buffer_length = 3;
    bndo_[2].is_null = &country_code_is_null_;

    bndo_[3].buffer_type = MYSQL_TYPE_STRING;
    bndo_[3].buffer = (char*)country_name;
    bndo_[3].buffer_length = 65;
    bndo_[3].is_null = &country_name_is_null_;

    bndo_[4].buffer_type = MYSQL_TYPE_STRING;
    bndo_[4].buffer = (char*)region_name;
    bndo_[4].buffer_length = 129;
    bndo_[4].is_null = &region_name_is_null_;

    bndo_[5].buffer_type = MYSQL_TYPE_STRING;
    bndo_[5].buffer = (char*)city_name;
    bndo_[5].buffer_length = 129;
    bndo_[5].is_null = &city_name_is_null_;

    if ( mysql_stmt_bind_result(s, bndo_) )
        Cdb::ThrowSQL("Cip2location_db3::bindOutput | mysql_stmt_bind_result");
}


/* ---------------------------------------------------------------------------
   Bind output value for Set
--------------------------------------------------------------------------- */
void Cip2location_db3::bindSetOutput()
{
static unsigned ip_from;    /* to be scrapped anyway */

    memset(&bndso_, 0, sizeof(bndso_));

    bndso_[0].buffer_type = MYSQL_TYPE_LONG;
    bndso_[0].buffer = (char*)&ip_from;
    bndso_[0].is_unsigned = true;

    if ( mysql_stmt_bind_result(sSet_, bndso_) )
        Cdb::ThrowSQL("Cip2location_db3::bindSetOutput | mysql_stmt_bind_result");
}


/* ---------------------------------------------------------------------------
   Convert single char values
--------------------------------------------------------------------------- */
void Cip2location_db3::convSC()
{
}


/* ---------------------------------------------------------------------------
   Generate date-time strings
--------------------------------------------------------------------------- */
void Cip2location_db3::genDTStrings()
{
}


/* ---------------------------------------------------------------------------
   Reset (zero) public variables
--------------------------------------------------------------------------- */
void Cip2location_db3::Reset()
{
    ip_from = 0;
    ip_to = 0;
    country_code[0] = EOS;
    country_name[0] = EOS;
    region_name[0] = EOS;
    city_name[0] = EOS;
}
