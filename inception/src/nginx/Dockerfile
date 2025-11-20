ARG version=latst #the the image to run container
ARG CONFPATH=/home/rayne/inception/inception/src/nginx/confg/nginx.conf

FROM alpine:$version




RUN apk update  && apk upgrade && apk add nginx && apk add openssl


COPY $CONFPATH /etc/nginx/nginx.conf

#need in a scripte right here 

#here is just the syntax for the prv key
RUN openssl genrsa -out /etc/nginx/ssl/server.key 2048

#for the certificate
RUN openssl req -new -key /etc/nginx/ssl/server.key -out /etc/nginx/ssl/server.csr




