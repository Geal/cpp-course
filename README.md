# C++ course

## Prerequisites

### Installation instructions

- install Docker (community edition): https://docs.docker.com/engine/installation/#cloud
  - Docker for Windows if you have Windows 10 Pro (with Hyper V support)
  - Docker Toolbox if you have Windows 10 Home
- pull the image for this course: `docker pull geal/cpp-course`
- get a shell inside the image
  - if you installed Docker Toolbox: `docker run -t -i -v $(pwd):/opt/course geal/cpp-course /bin/bash`
  - if you installed Docker For Windows, in a CMD: `docker run -t -i -v /c/Users/v-tre_nom_d_utilisateur/Desktop:/opt/course geal/cpp-course /bin/bash`

### Incompatibilities with VMWare

- Docker for Windows: apparently, VMWare cannot be used concurrently with Docker because Docker uses Hyper V. You can activate (for this course) or deactivate (for your vmware course) Hyper V by following the instructions at https://superuser.com/questions/540055/convenient-way-to-enable-disable-hyper-v-in-windows-8
- Docker Toolbox: you can launch VMWare if you temprarily deactivate VirtualBox's network interfaces

## shell commands

- `cd name` change the current directory to `name`
- `pwd` shows the full path of the current directory
- `ls` slists all the files in the current directory
- `mkdir name` will create the folder `name`
- `rm name` will delete the file `name`
- `g++ main.cpp -o program` will compile the `main.cpp` file to the `program` file, that you can then launch with the command `./program`

## References

- https://learnxinyminutes.com/docs/c/
- https://learnxinyminutes.com/docs/c++/
- http://www.cplusplus.com/reference/
