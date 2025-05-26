#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <assert.h>

int main(int argc, char *argv[])
{
    int fd = open("/tmp/example.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
    assert(fd != -1);
    int rc = write(fd, "hello world\n", 12 + 1);
    assert(rc == 13);
    close(fd);
    return 0;
}