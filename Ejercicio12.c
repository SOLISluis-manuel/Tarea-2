#include <stdio.h>

int main() {
    int N;
    unsigned long long producto = 1;

    // Pedir al usuario el valor de N
    printf("Ingresa el valor de N: ");
    scanf("%d", &N);

    // Verificar que N sea un número natural positivo
    if (N < 1) {
        printf("El valor de N debe ser un numero natural positivo.\n");
        return 1;
    }

    // Calcular el producto de los primeros N números naturales
    for (int i = 1; i <= N; i++) {
        producto *= i;
    }

    // Mostrar el resultado
    printf("El producto de los primeros %d numeros naturales es: %llu\n", N, producto);

    return 0;
}
