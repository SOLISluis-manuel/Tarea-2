#include <stdio.h>

int main() {
    int n;

    // Pedir al usuario el tamaño del arreglo
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];
    int suma = 0;

    // Pedir al usuario los elementos del arreglo
    printf("Ingresa los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i]; // Sumar cada elemento
    }

    // Mostrar el resultado
    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
