#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h> 
#include <unistd.h>

int main()
{
    int fd;

    fd = open("teste", O_RDONLY);

    int i = 20;
    int line_count = 0;
    char    *result_line;

    printf("\n\t ____START____\n");

    while(i--)
    {
//        printf("linha %i:", line_count++);
        result_line = get_next_line(fd);
        printf("%s", result_line);
    }

    printf("\n\t ____DONE____");
    close(fd);

    return (0);
}
