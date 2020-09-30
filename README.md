# ip2loc
This is the demo project for [IP2Location](https://www.ip2location.com) Contest.

It shows visits history with location, based on [IP2Location™ LITE IP-COUNTRY](https://lite.ip2location.com/database/ip-country) free database and [Silgy](https://github.com/silgy/silgy) as a web application framework.

## Live
It's live here: [silgy.org:2020](http://silgy.org:2020)

## Installation (UNIX/Linux)

### 1. Install C++ compiler and MySQL:
```
sudo yum install -y gcc-c++
sudo yum install -y mysql-server mysql
```

### 2. Create a database `ip2loc` and create two tables:

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

### 3. Download or clone this repository

### 4. Make `src/m` executable:
```
cd src
chmod u+x m
```

### 5. Compile
```
cd src
m
```
You may need to verify MySQL include and library paths in `m`. It's been tested on a fresh AWS EC2 instance (`Amazon Linux AMI release 2018.03`).

### 6. Verify $SILGYDIR in `bin/silgystart` and `bin/silgystop`

### 7. Run `bin/silgystart`
