FROM alpine:latest

RUN apk update && apk add mariadb mariadb-client

RUN mkdir -p /run/mysqld /var/lib/mysql

COPY ./init.sh /init.sh

RUN chmod +x init.sh

ENV MYSQL_DATABASE=mydb
ENV MYSQL_USER=user
ENV MYSQL_PASSWORD=password
ENV MYSQL_ROOT_PASSWORD=rootpass

EXPOSE 3306

CMD ["./init.sh"]

