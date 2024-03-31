#include <stdio.h>

int main() {
    int variable = 7;
    int *puntero = &variable;// Declarar un puntero que apunte a la variable

    // Mostrar el contenido del puntero
    printf("1) Contenido del puntero: %d\n", *puntero);
    printf("2) Dirección de memoria almacenada por el puntero: %p\n", puntero);
    printf("3) Dirección de memoria de la variable: %p\n", &variable);
    printf("4) Dirección de memoria del puntero: %p\n", &puntero);
    printf("5) Tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(variable));

    return 0;
}
