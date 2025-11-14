# first the base image of whatever we wanna use

# FROM ubuntu



# RUN apt-get update



# CMD ["cat" ,".dockerenv"]


# build in docker file for libft

ARG ALPIN_VIRSION=3.10

FROM alpine:${ALPIN_VIRSION}

RUN apk update && apk add build-base && apk add make


COPY . /app

WORKDIR /app/src/libft


RUN make


