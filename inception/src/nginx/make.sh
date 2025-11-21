
docker build -t nginx-test .
docker run -p 88:88 --name nginx-test nginx-test