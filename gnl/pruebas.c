#include "get_next_line.h"

int main()
{
    int fd = open("/home/biniesta/Proyectos/proyectos/gnl/pruebas.txt", O_RDONLY);  // Cambia "archivo_de_prueba.txt" a tu archivo de prueba
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return 1;
    }
    // int i = 0;
    char *line;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);  // Liberar la memoria de cada línea
        // if(line)
        //     printf("%i", i++);
    }

    close(fd);
    return 0;
}