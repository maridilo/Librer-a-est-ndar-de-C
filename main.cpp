#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

int main() {
    // Declarar un número negativo
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);

    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    char str[] = "Hola mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    FILE *file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    // Cerrar el archivo al final
    fclose(file1);

    FILE *file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file2, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file2);

    // Abrir de nuevo para leer
    file2 = fopen("file.txt", "r");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file2, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file2);

    return 0;
}
