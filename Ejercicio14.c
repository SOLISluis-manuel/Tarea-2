#include <stdio.h>

int main() {
    int n, numero, contador = 0;

    // Pedir al usuario el tamaño del arreglo
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &n);

    int arreglo[n];

    // Pedir al usuario los elementos del arreglo
    printf("Ingresa los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Pedir el número a buscar en el arreglo
    printf("Ingresa el numero a buscar: ");
    scanf("%d", &numero);

    // Contar cuántas veces aparece el número en el arreglo
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == numero) {
            contador++;
        }
    }

    // Mostrar el resultado
    printf("El numero %d aparece %d veces en el arreglo.\n", numero, contador);

    return 0;
}
