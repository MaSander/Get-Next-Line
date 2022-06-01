#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h> 
#include <unistd.h>

int main()
{
    int fd;

    fd = open("teste", O_RDONLY);

    printf("\n%s\n", get_next_line(fd));
    
    
    printf("\n%s\n", get_next_line(fd));

    printf("\n%s\n", get_next_line(fd));

    close(fd);

    return (0);
}

// int main()
// {
//   FILE *arq;
//   char Linha[10];
//   char *result;
//   int i;

//   // Abre um arquivo TEXTO para LEITURA
//   arq = fopen("teste", "rt");

//   if (arq == NULL)  // Se houve erro na abertura
//   {
//      printf("Problemas na abertura do arquivo\n");
//      return (0);
//   }

//   i = 1;
//   while (!feof(arq))
//   {
// 	// Lê uma linha (inclusive com o '\n')
//       result = fgets(Linha, 10, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
//       if (result)  // Se foi possível ler
// 	  printf("Linha %d : %s",i,Linha);
//       i++;
//   }
//   fclose(arq);
//   return (0);
// }