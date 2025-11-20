ARG version=latst #the the image to run container
ARG CONFPATH=/ee/e/e/

FROM alpine:$version




RUN apk update  && apk upgrade && add ngnix


COPY $CONFPATH /etc/nginx/nginx.conf

#need in a scripte right here 




