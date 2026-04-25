1. What is docker:
is a Cantainerization platform that all developer to pack there app
along with their dependencies, into unit called container
    :why docke, cuz he is fast & lightwight easy in scaling solve the it work on my machine  probleme `consistent enveronments`

2. Docker vs VM
Docker                                     VM
it use container to isolate             | it use the hypervisor to run separate OS
faster it runs in milisec it lightweight| slower set up in mins,  it need resouces-intensive


3. Image in Docker
in based readonly-template where it have all depandencies and exec commands to runs the application
container is created from the docker image 'docker run'


4. What is a Docker container?
is a running instance of the template image that it isolated Portable, and lightweight


5. How do you create and run a Docker container?
creat it by building in image with all of the dependencies -> `docker build [/path/docker/file] -t nameOfContainer` -t add tage to the container image
and then run in template for the image with -> `docker run nameOfContainer`


6. What is the purpose of the Dockerfile?
dockerfile is in file that cointaine the instraction to build in docker image
and is in automatization of the cli work to make work readbel and easy to modile on


7. What are Docker volumes?
docker volumes is in way to store container's data outside of container filesys
there three type of it:
anonymous volumes   : `docker run -v /data nginx`
bind volumes        : `docker run -v /host/path:/container/path nginx`
Named volumes       : `docker volume create mydata`

8. How do you list running Docker containers?
`docker ps`
`docker ps -a` to include all of them include the stoped ones



9. What is Docker Compose?
docker compose is tool to run multiple contianers-app and automatized the sharefile between the contrainer
and share the networkking auto with scripte printed in `docker-compose.ymal` file
`docker-compose up` to run
`docker-compose down` to stop


10. What is the difference between CMD and ENTRYPOINT in Docker?
CMD defines the default arguments or command that will run when the container starts -> It is easily overridden at runtime (docker run ... <new command>)
ENTRYPOINT defines the main executable (PID 1) of the container -> It is not easily overridden (you need --entrypoint explicitly)


11. What is Kubernetes?