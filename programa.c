#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h" 
#include "estructuras.h"

/*int main() {
    char nombreArchivo[] = "texto.txt"; // Nombre del archivo a leer

    leerArchivo(nombreArchivo);

    return 0;
}

int main() {
    FILE *archivo;
    char palabra[100]; // Tamaño del buffer para la palabra

    archivo = fopen("texto.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    // Leer palabras del archivo usando fscanf y luego imprimirlas
    while (fscanf(archivo, "%s", palabra) == 1) {
        printf("%s ", palabra);
    }

    fclose(archivo);
    return 0;
}*/

#define BUFFER_SIZE 1024 // Tamaño del buffer para lectura de archivos binarios

int main() {
    FILE *archivo;
    unsigned char buffer[BUFFER_SIZE]; // Buffer para almacenar los datos leídos

    archivo = fopen("archivo.bin", "rb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    size_t bytes_leidos;
    while ((bytes_leidos = fread(buffer, 1, BUFFER_SIZE, archivo)) > 0) {
        // Mostrar los datos leídos en formato hexadecimal
        for (size_t i = 0; i < bytes_leidos; ++i) {
            printf("%02X ", buffer[i]);
        }
    }
    
    fclose(archivo);
    return 0;
}