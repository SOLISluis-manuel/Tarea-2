#include <stdio.h>

int main() {
    int numeros[100];
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Ingresa 100 numeros naturales (positivos o nulos):\n");
    for (int i = 0; i < 100; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        // Contar positivos, negativos o nulos
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    // Mostrar resultados
    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
