FROM gcc:latest
COPY . /usr/src/app
WORKDIR /usr/src/app
RUN gcc -o hello structs.c
CMD ["./hello"]