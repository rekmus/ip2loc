/* ---------------------------------------------------------------------------
   Table access class
   Generated on silgy.org on 2020-05-30 10:37:38, generator v.1.0.0
   Using C-style strings
   Using exceptions
--------------------------------------------------------------------------- */

#include "Cvisits.h"


bool Cvisits::slots_[CDB_MAX_INSTANCES]={0};


/* ---------------------------------------------------------------------------
   Constructor
--------------------------------------------------------------------------- */
Cvisits::Cvisits()
{
    setInstance(slots_);

    table_ = "visits";

    columnList_ =   "id,"
                    "ip,"
                    "country_code,"
                    "region_name,"
                    "city_name,"
                    "method,"
                    "uri,"
                    "referer,"
                    "uagent,"
                    "lang,"
                    "ua_type,"
                    "bot,"
                    "ad,"
                    "session_id,"
                    "status,"
                    "processing,"
                    "created";

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
Cvisits::~Cvisits()
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
bool Cvisits::Fetch()
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
            Cdb::ThrowSQL("Cvisits::Fetch | mysql_stmt_fetch");
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
bool Cvisits::Get(int arg_id)
{
    int ret;

    if ( firstGet_ )
    {
        char q[SQLBUF];
        sprintf(q, "SELECT id,ip,country_code,region_name,city_name,method,uri,referer,uagent,lang,ua_type,bot,ad,session_id,status,processing,created FROM visits WHERE id=?");
        ret = mysql_stmt_prepare(sGet_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cvisits::Get | mysql_stmt_prepare");
        firstGet_ = false;
    }

    bindKey(sGet_, arg_id);

    if ( mysql_stmt_execute(sGet_) )
        Cdb::ThrowSQL("Cvisits::Get | mysql_stmt_execute");

    bindOutput(sGet_);

    if ( mysql_stmt_store_result(sGet_) )
        Cdb::ThrowSQL("Cvisits::Get | mysql_stmt_store_result");

    ret = mysql_stmt_fetch(sGet_);

    if ( ret != 0 )
    {
        if ( ret == 1 || ret == MYSQL_NO_DATA )
            return false;
        else
            Cdb::ThrowSQL("Cvisits::Get | mysql_stmt_fetch");
    }

    convSC();

    genDTStrings();

    return true;
}


/* ---------------------------------------------------------------------------
   Insert record
--------------------------------------------------------------------------- */
unsigned Cvisits::Insert()
{
    int ret;

    if ( firstInsert_ )
    {
        char q[SQLBUF];
        sprintf(q, "INSERT INTO visits (ip,country_code,region_name,city_name,method,uri,referer,uagent,lang,ua_type,bot,ad,session_id,status,processing,created) VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
        ret = mysql_stmt_prepare(sInsert_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cvisits::Insert | mysql_stmt_prepare");
        firstInsert_ = false;
    }

    bindInput(sInsert_);

    ret = mysql_stmt_execute(sInsert_);

    if ( ret != 0 )
        Cdb::ThrowSQL("Cvisits::Insert | mysql_stmt_execute");

    id = mysql_insert_id(dbConn_);

    return id;
}


/* ---------------------------------------------------------------------------
   Update record by PK
--------------------------------------------------------------------------- */
void Cvisits::Update(int arg_id)
{
    int ret;

    if ( firstUpdate_ )
    {
        char q[SQLBUF];
        sprintf(q, "UPDATE visits SET ip=?,country_code=?,region_name=?,city_name=?,method=?,uri=?,referer=?,uagent=?,lang=?,ua_type=?,bot=?,ad=?,session_id=?,status=?,processing=?,created=? WHERE id=?");
        ret = mysql_stmt_prepare(sUpdate_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cvisits::Update | mysql_stmt_prepare");
        firstUpdate_ = false;
    }

    bindInput(sUpdate_, true, arg_id);

    ret = mysql_stmt_execute(sUpdate_);

    if ( ret != 0 )
        Cdb::ThrowSQL("Cvisits::Update | mysql_stmt_execute");
}


/* ---------------------------------------------------------------------------
   Delete record by PK
--------------------------------------------------------------------------- */
void Cvisits::Delete(int arg_id)
{
    int ret;

    if ( firstDelete_ )
    {
        char q[SQLBUF];
        sprintf(q, "DELETE FROM visits WHERE id=?");
        ret = mysql_stmt_prepare(sDelete_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cvisits::Delete | mysql_stmt_prepare");
        firstDelete_ = false;
    }

    bindKey(sDelete_, arg_id);

    ret = mysql_stmt_execute(sDelete_);

    if ( ret != 0 )
        Cdb::ThrowSQL("Cvisits::Delete | mysql_stmt_execute");
}


/* ---------------------------------------------------------------------------
   Insert or update record by PK
--------------------------------------------------------------------------- */
void Cvisits::Set(int arg_id)
{
    int ret;

    if ( firstSet_ )
    {
        char q[SQLBUF];
        sprintf(q, "SELECT id FROM visits WHERE id=?");
        ret = mysql_stmt_prepare(sSet_, q, strlen(q));
        if ( ret != 0 )
            Cdb::ThrowSQL("Cvisits::Set | mysql_stmt_prepare");
        firstSet_ = false;
    }

    bindKey(sSet_, arg_id);

    if ( mysql_stmt_execute(sSet_) )
        Cdb::ThrowSQL("Cvisits::Set | mysql_stmt_execute");

    bindSetOutput();

    if ( mysql_stmt_store_result(sSet_) )
        Cdb::ThrowSQL("Cvisits::Set | mysql_stmt_store_result");

    ret = mysql_stmt_fetch(sSet_);

    if ( ret == 0 )   /* record existed */
    {
        Update(arg_id);
    }
    else if ( ret == 1 || ret == MYSQL_NO_DATA )   /* not found ==> insert new */
    {
        id = arg_id;

        Insert();
    }
    else
        Cdb::ThrowSQL("Cvisits::Set | mysql_stmt_fetch");
}


/* ---------------------------------------------------------------------------
   Bind key values
--------------------------------------------------------------------------- */
void Cvisits::bindKey(MYSQL_STMT *s, int arg_id)
{
    k_id_ = arg_id;

    memset(&bndk_, 0, sizeof(bndk_));

    bndk_[0].buffer_type = MYSQL_TYPE_LONG;
    bndk_[0].buffer = (char*)&k_id_;

    if ( mysql_stmt_bind_param(s, bndk_) )
        Cdb::ThrowSQL("Cvisits::bindKey | mysql_stmt_bind_param");
}


/* ---------------------------------------------------------------------------
   Bind input values
--------------------------------------------------------------------------- */
void Cvisits::bindInput(MYSQL_STMT *s, bool withKey, int arg_id)
{
    ip_len_ = strlen(ip);
    country_code_len_ = strlen(country_code);
    region_name_len_ = strlen(region_name);
    city_name_len_ = strlen(city_name);
    method_len_ = strlen(method);
    uri_len_ = strlen(uri);
    referer_len_ = strlen(referer);
    uagent_len_ = strlen(uagent);
    lang_len_ = strlen(lang);
    s_ua_type_[0] = ua_type;
    s_ua_type_[1] = EOS;
    ua_type_len_ = 1;
    s_bot_[0] = bot;
    s_bot_[1] = EOS;
    bot_len_ = 1;
    s_ad_[0] = ad;
    s_ad_[1] = EOS;
    ad_len_ = 1;

    set_datetime(&t_created_, created);

    memset(&bndi_, 0, sizeof(bndi_));

    bndi_[0].buffer_type = MYSQL_TYPE_STRING;
    bndi_[0].buffer = (char*)ip;
    bndi_[0].length = &ip_len_;

    bndi_[1].buffer_type = MYSQL_TYPE_STRING;
    bndi_[1].buffer = (char*)country_code;
    bndi_[1].length = &country_code_len_;

    bndi_[2].buffer_type = MYSQL_TYPE_STRING;
    bndi_[2].buffer = (char*)region_name;
    bndi_[2].length = &region_name_len_;

    bndi_[3].buffer_type = MYSQL_TYPE_STRING;
    bndi_[3].buffer = (char*)city_name;
    bndi_[3].length = &city_name_len_;

    bndi_[4].buffer_type = MYSQL_TYPE_STRING;
    bndi_[4].buffer = (char*)method;
    bndi_[4].length = &method_len_;

    bndi_[5].buffer_type = MYSQL_TYPE_STRING;
    bndi_[5].buffer = (char*)uri;
    bndi_[5].length = &uri_len_;

    bndi_[6].buffer_type = MYSQL_TYPE_STRING;
    bndi_[6].buffer = (char*)referer;
    bndi_[6].length = &referer_len_;

    bndi_[7].buffer_type = MYSQL_TYPE_STRING;
    bndi_[7].buffer = (char*)uagent;
    bndi_[7].length = &uagent_len_;

    bndi_[8].buffer_type = MYSQL_TYPE_STRING;
    bndi_[8].buffer = (char*)lang;
    bndi_[8].length = &lang_len_;

    bndi_[9].buffer_type = MYSQL_TYPE_STRING;
    bndi_[9].buffer = (char*)s_ua_type_;
    bndi_[9].length = &ua_type_len_;

    bndi_[10].buffer_type = MYSQL_TYPE_STRING;
    bndi_[10].buffer = (char*)s_bot_;
    bndi_[10].length = &bot_len_;

    bndi_[11].buffer_type = MYSQL_TYPE_STRING;
    bndi_[11].buffer = (char*)s_ad_;
    bndi_[11].length = &ad_len_;

    bndi_[12].buffer_type = MYSQL_TYPE_LONG;
    bndi_[12].buffer = (char*)&session_id;

    bndi_[13].buffer_type = MYSQL_TYPE_SHORT;
    bndi_[13].buffer = (char*)&status;

    bndi_[14].buffer_type = MYSQL_TYPE_FLOAT;
    bndi_[14].buffer = (char*)&processing;

    bndi_[15].buffer_type = MYSQL_TYPE_DATETIME;
    bndi_[15].buffer = (char*)&t_created_;

    if ( withKey )   /* after WHERE */
    {
        k_id_ = arg_id;

        bndi_[16].buffer_type = MYSQL_TYPE_LONG;
        bndi_[16].buffer = (char*)&k_id_;

    }

    if ( mysql_stmt_bind_param(s, bndi_) )
        Cdb::ThrowSQL("Cvisits::bindInput | mysql_stmt_bind_param");
}


/* ---------------------------------------------------------------------------
   Bind output values
--------------------------------------------------------------------------- */
void Cvisits::bindOutput(MYSQL_STMT *s)
{
    memset(&bndo_, 0, sizeof(bndo_));

    bndo_[0].buffer_type = MYSQL_TYPE_LONG;
    bndo_[0].buffer = (char*)&id;
    bndo_[0].is_null = &id_is_null_;

    bndo_[1].buffer_type = MYSQL_TYPE_STRING;
    bndo_[1].buffer = (char*)ip;
    bndo_[1].buffer_length = 61;
    bndo_[1].is_null = &ip_is_null_;

    bndo_[2].buffer_type = MYSQL_TYPE_STRING;
    bndo_[2].buffer = (char*)country_code;
    bndo_[2].buffer_length = 3;
    bndo_[2].is_null = &country_code_is_null_;

    bndo_[3].buffer_type = MYSQL_TYPE_STRING;
    bndo_[3].buffer = (char*)region_name;
    bndo_[3].buffer_length = 129;
    bndo_[3].is_null = &region_name_is_null_;

    bndo_[4].buffer_type = MYSQL_TYPE_STRING;
    bndo_[4].buffer = (char*)city_name;
    bndo_[4].buffer_length = 129;
    bndo_[4].is_null = &city_name_is_null_;

    bndo_[5].buffer_type = MYSQL_TYPE_STRING;
    bndo_[5].buffer = (char*)method;
    bndo_[5].buffer_length = 16;
    bndo_[5].is_null = &method_is_null_;

    bndo_[6].buffer_type = MYSQL_TYPE_STRING;
    bndo_[6].buffer = (char*)uri;
    bndo_[6].buffer_length = 251;
    bndo_[6].is_null = &uri_is_null_;

    bndo_[7].buffer_type = MYSQL_TYPE_STRING;
    bndo_[7].buffer = (char*)referer;
    bndo_[7].buffer_length = 251;
    bndo_[7].is_null = &referer_is_null_;

    bndo_[8].buffer_type = MYSQL_TYPE_STRING;
    bndo_[8].buffer = (char*)uagent;
    bndo_[8].buffer_length = 251;
    bndo_[8].is_null = &uagent_is_null_;

    bndo_[9].buffer_type = MYSQL_TYPE_STRING;
    bndo_[9].buffer = (char*)lang;
    bndo_[9].buffer_length = 6;
    bndo_[9].is_null = &lang_is_null_;

    bndo_[10].buffer_type = MYSQL_TYPE_STRING;
    bndo_[10].buffer = (char*)s_ua_type_;
    bndo_[10].buffer_length = 2;
    bndo_[10].is_null = &ua_type_is_null_;

    bndo_[11].buffer_type = MYSQL_TYPE_STRING;
    bndo_[11].buffer = (char*)s_bot_;
    bndo_[11].buffer_length = 2;
    bndo_[11].is_null = &bot_is_null_;

    bndo_[12].buffer_type = MYSQL_TYPE_STRING;
    bndo_[12].buffer = (char*)s_ad_;
    bndo_[12].buffer_length = 2;
    bndo_[12].is_null = &ad_is_null_;

    bndo_[13].buffer_type = MYSQL_TYPE_LONG;
    bndo_[13].buffer = (char*)&session_id;
    bndo_[13].is_null = &session_id_is_null_;

    bndo_[14].buffer_type = MYSQL_TYPE_SHORT;
    bndo_[14].buffer = (char*)&status;
    bndo_[14].is_null = &status_is_null_;

    bndo_[15].buffer_type = MYSQL_TYPE_FLOAT;
    bndo_[15].buffer = (char*)&processing;
    bndo_[15].is_null = &processing_is_null_;

    bndo_[16].buffer_type = MYSQL_TYPE_DATETIME;
    bndo_[16].buffer = (char*)&t_created_;
    bndo_[16].is_null = &created_is_null_;

    if ( mysql_stmt_bind_result(s, bndo_) )
        Cdb::ThrowSQL("Cvisits::bindOutput | mysql_stmt_bind_result");
}


/* ---------------------------------------------------------------------------
   Bind output value for Set
--------------------------------------------------------------------------- */
void Cvisits::bindSetOutput()
{
static int id;    /* to be scrapped anyway */

    memset(&bndso_, 0, sizeof(bndso_));

    bndso_[0].buffer_type = MYSQL_TYPE_LONG;
    bndso_[0].buffer = (char*)&id;

    if ( mysql_stmt_bind_result(sSet_, bndso_) )
        Cdb::ThrowSQL("Cvisits::bindSetOutput | mysql_stmt_bind_result");
}


/* ---------------------------------------------------------------------------
   Convert single char values
--------------------------------------------------------------------------- */
void Cvisits::convSC()
{
    if ( ua_type_is_null_ )
        ua_type = 0;
    else
        ua_type = s_ua_type_[0];

    if ( bot_is_null_ )
        bot = 0;
    else
        bot = s_bot_[0];

    if ( ad_is_null_ )
        ad = 0;
    else
        ad = s_ad_[0];
}


/* ---------------------------------------------------------------------------
   Generate date-time strings
--------------------------------------------------------------------------- */
void Cvisits::genDTStrings()
{
    if ( created_is_null_ )
        created[0] = EOS;
    else
        sprintf(created, "%04d-%02d-%02d %02d:%02d:%02d", t_created_.year, t_created_.month, t_created_.day, t_created_.hour, t_created_.minute, t_created_.second);
}


/* ---------------------------------------------------------------------------
   Reset (zero) public variables
--------------------------------------------------------------------------- */
void Cvisits::Reset()
{
    id = 0;
    ip[0] = EOS;
    country_code[0] = EOS;
    region_name[0] = EOS;
    city_name[0] = EOS;
    method[0] = EOS;
    uri[0] = EOS;
    referer[0] = EOS;
    uagent[0] = EOS;
    lang[0] = EOS;
    ua_type = 0;
    bot = 0;
    ad = 0;
    session_id = 0;
    status = 0;
    processing = 0;
    created[0] = EOS;
}
