#include <stdio.h>
#include <fcntl.h>
#include "music.h"

int open_file(void) {
    char *path = "raw.txt";
    int fd = open(path, O_RDONLY);
    if (fd == -1) {
        printf("Error opening the file %s", path);
        return -1;
    }
    return fd;
}

char *read_file(int fd) {
    // we like 4KB buffers
    void *buf[1024 * 4] = {0};
    int ret  = read(fd, buf, 1024 * 4);
    if (ret == -1) {
        printf("Error reading the file on fd %d\n", fd);
        return -1;
    }
    printf("Bytes read: %d\n", ret);
}


int main(void) {
    Album a = {"Master of Puppets", "Metallica", 1986};

    int fd = open_file();
    printf("%d\n", fd);
    char *content = read_file(fd);
    return 0;
}