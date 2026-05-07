#!/bin/bash

service mariadb start

sleep 6

mariadb -e "CREATE DATABASE IF NOT EXISTS \`$DATABASE_NAME\`;"
mariadb -e "CREATE USER IF NOT EXISTS '$DATABASE_USER'@'%' IDENTIFIED BY '$DATABASE_PASSWORD';"
mariadb -e "GRANT ALL PRIVILEGES ON \`$DATABASE_NAME\`.* TO '$DATABASE_USER'@'%';"
mariadb -e "FLUSH PRIVILEGES;"

service mariadb stop
exec mysqld --datadir="/var/lib/mysql" --bind-address=0.0.0.0 --port=3306
