#include <stdio.h>

int main() {
    int N;

    // Solicitar al usuario el número para la tabla de multiplicar
    printf("Ingrese un número entero para obtener su tabla de multiplicar: ");
    scanf("%d", &N);

    // Generar y mostrar la tabla de multiplicar
    printf("Tabla de multiplicar del %d:\n", N);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
