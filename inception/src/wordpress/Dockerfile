#same setup as the nginx work
ARG version=latest
FROM alpine:${version}


RUN apk add --no-cache php php-fpm php-mysqli php-json php-curl php-dom \
    php-exif php-fileinfo php-mbstring php-openssl php-zip php-phar \
    wget curl tar mariadb-client


RUN sed -i 's|listen = 127.0.0.1:9000|listen = 9000|' \
    /etc/php83/php-fpm.d/www.conf


RUN mkdir -p /var/www/html


WORKDIR /var/www/html



COPY tool/setup.sh /setup.sh

RUN chmod +x /setup.sh

EXPOSE 9000

CMD [ "/bin/sh" , "/setup.sh"]

