#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h> 
#include <unistd.h>

int main()
{
    int i = 15;
    int line_count = 0;
    char    *result_line;

    printf("\n\t ____START____\n");
    
    int fd = open("teste", O_RDONLY);
    while(i--)
    {
        result_line = get_next_line(fd);
        printf("::%s", result_line);
    }

    printf("\n\t ____DONE____");
    close(fd);
}