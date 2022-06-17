#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
    char *result;
    int fd = open("teste.txt", O_RDONLY);

    result = get_next_line(fd);
    printf("%s", result);
    free(result);

    result = get_next_line(fd);
    printf("%s", result);
    free(result);

    close(fd);

    return 1;
}