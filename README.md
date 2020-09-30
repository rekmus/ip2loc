# ip2loc
IP2Location Demo (web application)

## Live
It's live here: [silgy.org:2020](http://silgy.org:2020)

## Installation (UNIX/Linux)

1. MySQL database needs to contain two tables:

* `ip2location_db3` (as per [IP2Location cheat sheet](https://lite.ip2location.com/database/ip-country-region-city))
* `visits`:

```
create table visits
(
    id int auto_increment primary key,
    ip char(60),
    country_code CHAR(2),
    region_name VARCHAR(128),
    city_name VARCHAR(128),
    method char(15),
    uri varchar(250),
    referer varchar(250),
    uagent varchar(250),
    lang char(5),
    ua_type char(1),
    bot char(1),
    ad char(1),
    session_id int,
    status smallint,
    processing float,
    created datetime
);
```

