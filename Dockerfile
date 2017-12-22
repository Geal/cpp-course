FROM ubuntu:latest

RUN apt-get update \
&& apt-get upgrade -y
RUN apt-get install -y gcc g++ gdb make git binutils valgrind
WORKDIR /opt
ADD ./examples /opt/examples
ADD ./.gitconfig /root/
RUN apt-get install -y vim nano
