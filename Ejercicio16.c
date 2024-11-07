#include <stdio.h>

int main() {
    int arreglo[100];

    // Llenar el arreglo con los primeros 100 números pares
    for (int i = 0; i < 100; i++) {
        arreglo[i] = (i + 1) * 2;
    }

    // Imprimir el arreglo
    printf("Los primeros 100 numeros pares son:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
