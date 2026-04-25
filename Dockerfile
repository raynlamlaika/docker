# // here is te dockerfile work flow:

# Comment
# INSTRUCTION arguments



# BuildKit is the modern, 
# high-performance engine ⚙️ that Docker uses to turn your Dockerfile into an image. 
# It's the tool that runs "under the hood" when you type docker build.

# here is some instracton 

# Instruction           Description
# ADD                   Add local or remote files and directories.
# ARG                   Use build-time variables.
# CMD                   Specify default commands.
# COPY                  Copy files and directories.
# ENTRYPOINT            Specify default executable.
# ENV                   Set environment variables.
# EXPOSE                Describe which ports your application is listening on.
# FROM                  Create a new build stage from a base image.
# HEALTHCHECK           Check a container's health on startup.
# LABEL                 Add metadata to an image.
# MAINTAINER            Specify the author of an image.
# ONBUILD               Specify instructions for when the image is used in a build.
# RUN                   Execute build commands.
# SHELL                 Set the default shell of an image.
# STOPSIGNAL            Specify the system call signal for exiting a container.
# USER                  Set user and group ID.
# VOLUME                Create volume mounts.
# WORKDIR               Change working directory.






FROM nginx:1.10.1-alpine


# syntax args: COPY src dest 
COPY src/html /usr/ngnix/html


# EXPOSE it user tcp by default andte port is 80 also by default

# CMD ["ngnix", "-g", "deamon off;"] is command it passed by default to run the u

