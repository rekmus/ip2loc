# ip2loc
This is the demo project for [IP2Location](https://www.ip2location.com) Contest.

It shows visits history with location, based on [IP2Location™ LITE IP-COUNTRY](https://lite.ip2location.com/database/ip-country) free database and [Silgy](https://github.com/silgy/silgy) as a web application framework.

## Live instance
It's live here: [silgy.org:2020](http://silgy.org:2020)

## Installation (UNIX/Linux)
The demo is running on [AWS EC2 Linux t2.micro](https://aws.amazon.com/ec2/instance-types/t2) instance (`Amazon Linux AMI release 2018.03`).

### 1. Install C++ compiler and MySQL:
```
sudo yum install -y gcc-c++
sudo yum install -y mysql-server mysql
```
Optionally:
```
sudo yum install -y mysql-devel
```

### 2. Download or clone this repository

### 3. Create a database `ip2loc` and create two tables:

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

The database name and credentials are in `bin/silgy.conf`.

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
(You may need to verify MySQL include and library paths in `m`, depending on your configuration)

### 6. Verify $SILGYDIR in `bin/silgystart` and `bin/silgystop`
The existing code assumes it's `/home/ec2-user/ip2loc`.

### 7. Run `bin/silgystart`
