#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000 

void leerArchivo(const char *nombreArchivo) {
    FILE *archivo;
    char linea[MAX_LINE_LENGTH];

    // Abrir el archivo en modo lectura ("r")
    archivo = fopen("texto.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    // Leer y mostrar el contenido del archivo línea por línea
    while (fgets(linea, MAX_LINE_LENGTH, archivo) != NULL) {
        printf("%s", linea); // Imprimir la línea leída
    }

    // Cerrar el archivo al finalizar la lectura
    fclose(archivo);
}