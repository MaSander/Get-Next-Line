#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h> 
#include <unistd.h>

int main()
{
    int fd;

    fd = open("teste", O_RDONLY);

    int i = 10;
    int line_count = 0;

    printf("\n\t ____START____\n");

    while(i--)
    {
        printf("linha %i:\n", line_count++);
        printf("%s\n", get_next_line(fd));
    }

    printf("\n\t ____DONE____");
    close(fd);

    return (0);
}
