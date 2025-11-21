# ARG version=latst #the the image to run container
# ARG CONFPATH=/home/rayne/inception/inception/src/nginx/confg/nginx.conf

# FROM alpine:$version




# RUN apk update  && apk upgrade && apk add nginx && apk add openssl


# COPY $CONFPATH /etc/nginx/nginx.conf

# #need in a scripte right here 

# #here is just the syntax for the prv key
# RUN openssl genrsa -out /etc/nginx/ssl/server.key 2048

# #for the certificate
# RUN openssl req -new -key /etc/nginx/ssl/server.key -out /etc/nginx/ssl/server.csr




ARG version=latest
FROM alpine:${version}

RUN apk update && apk upgrade && \
    apk add nginx openssl

# Create SSL dir
RUN mkdir -p /etc/nginx/ssl

# Generate Private Key
RUN openssl genrsa -out /etc/nginx/ssl/server.key 2048

# Generate Self-Signed Certificate (.crt not .csr)
RUN openssl req \
    -x509 -nodes -days 365 \
    -key /etc/nginx/ssl/server.key \
    -out /etc/nginx/ssl/server.crt \
    -subj "/C=MA/ST=Settat/L=Khouribga/O=1337/CN=localhost"

# Copy your nginx.conf

# COPY ./public /var/www/html

# COPY ./confg/nginx.conf /etc/nginx/nginx.conf
COPY ./public /var/www/html
COPY ./confg/nginx.conf /etc/nginx/nginx.conf

EXPOSE 88

CMD ["nginx", "-g", "daemon off;"]
 