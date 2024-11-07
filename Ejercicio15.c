#include <stdio.h>

int main() {
    int n, positivos = 0, negativos = 0, nulos = 0;

    // Pedir al usuario el tamaño del arreglo
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];

    // Pedir al usuario los elementos del arreglo
    printf("Ingresa los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        // Contar positivos, negativos y nulos
        if (arreglo[i] > 0) {
            positivos++;
        } else if (arreglo[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    // Mostrar el resultado
    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
