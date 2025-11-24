#same setup as the nginx work
ARG version=latest
FROM alpine:${version}



RUN apk update && apk upgrade && add --no-cache \
	php81 php81-fpm php81-mysqli php81-json php81-curl php81-dom \
    php81-exif php81-fileinfo php81-mbstring php81-openssl php81-zip \
    wget curl tar mariadb-client	



RUN sed -i 's|listen = 127.0.0.1:9000|listen = 9000|' \
    /etc/php81/php-fpm.d/www.conf


RUN mkdir -p /var/www/html


WORKDIR /var/www/html



COPY tool/setup.sh /setup.sh

RUN chmod +x /setup.sh

EXPOSE 9000

CMD ["setup.sh"]

