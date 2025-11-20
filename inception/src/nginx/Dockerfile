ARG version=latst #the the image to run container
ARG CONFPATH=/ee/e/e/

FROM alpine:$version




RUN apk update  && apk upgrade && apk add ngnix && apk add openssl


COPY $CONFPATH /etc/nginx/nginx.conf

#need in a scripte right here 

#here is just the syntax
RUN openssl genrsa -out your_domain.key 2048

RUN openssl req -new -key your_domain.key -out your_domain.csr



