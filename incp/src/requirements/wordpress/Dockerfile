FROM alpine:latest

RUN apk update && apk add \
    php83 \
    php83-fpm \
    php83-mysqli \
    php83-phar \
    php83-curl \
    php83-json \
    php83-mbstring \
    php83-openssl \
    php83-xml \
    php83-zip \
    php83-session \
    php83-dom \
    php83-exif \
    php83-fileinfo \
    php83-tokenizer \
    mariadb-client \
    wget \
    curl

# Install WP-CLI
RUN wget https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar \
    && chmod +x wp-cli.phar \
    && mv wp-cli.phar /usr/local/bin/wp

# WordPress directory
RUN mkdir -p /var/www/html
WORKDIR /var/www/html

# Download WordPress
RUN wget https://wordpress.org/latest.tar.gz \
    && tar -xvf latest.tar.gz \
    && mv wordpress/* . \
    && rm -rf wordpress latest.tar.gz

# PHP-FPM config
COPY ./conf/www.conf /etc/php83/php-fpm.d/www.conf

# Init script
COPY ./tools/init.sh /init.sh
RUN chmod +x /init.sh

EXPOSE 9000

CMD ["/init.sh"]
