FROM alpine:latest


RUN apk update && apk upgrade && \
    apk add nginx openssl


    
RUN mkdir -p /etc/nginx/ssl


RUN openssl req \
    -x509 -nodes -days 365 \
    -newkey rsa:2048 \
    -keyout /etc/nginx/ssl/server.key \
    -out /etc/nginx/ssl/server.crt \
    -subj "/C=MA/ST=Settat/L=Khouribga/O=1337/CN=localhost"


COPY ./conf/nginx.conf /etc/nginx/nginx.conf



EXPOSE 80 443

CMD ["nginx", "-g", "daemon off;"]