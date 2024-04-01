#include <stdio.h>

    int Cuadrado(int num) {
    return num * num;
}

void CuadradoVoid(int num) {
    int resultado= num * num;
    printf("El cuadrado de %d es %d\n", num, resultado);
}

void mostrarVariables(int variable){
    printf("El contenido de la variable es: %d \n", variable);
    printf("La direccion de la variable es: %p \n", &variable);

}
void Invertir(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;

}

void Orden(int* a, int* b) {
    int aux;
    if (*a > *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main(){
     int numero,variable, x, y;
    printf("Ingrese un numero entero de 1 a 10:\n");
    scanf("%d", &numero);

    printf("El cuadrado de %d es %d\n", numero, Cuadrado(numero));
    Cuadrado(numero);
    CuadradoVoid(numero);

    printf("Ingrese una variable entera de 1 a 10:\n");
    scanf("%d", &variable);

    mostrarVariables(variable);

    printf("Ingrese un numero x de 1 a 10:\n");
    scanf("%d", &x);
    printf("Ingrese un numero y de 1 a 10:\n");
    scanf("%d", &y);

    Invertir(&x, &y);
    printf("Los valores invertidos son: %d %d\n", x, y);

    Orden(&x, &y);

    printf("Los valores ordenados son: %d %d\n", x, y);
    return 0;
}
