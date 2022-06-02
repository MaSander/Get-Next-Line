#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h> 
#include <unistd.h>

int main()
{
    int fd;

    fd = open("teste", O_RDONLY);

    int i = 2;

    while(i--)
    {
        printf("linha %i:\n", i);
        printf("\n%s\n", get_next_line(fd));
    }

    close(fd);

    return (0);
}
