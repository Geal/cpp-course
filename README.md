# C++ course

## Prerequisites

### Installation instructions

- install Docker (community edition): https://docs.docker.com/engine/installation/#cloud
- pull the image for this course: `docker pull geal/cpp-course`
- get a shell inside the image: `docker run -t -i -v $(pwd):/opt/course geal/cpp-course /bin/bash`

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
