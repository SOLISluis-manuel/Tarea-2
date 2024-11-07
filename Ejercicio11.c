#include <stdio.h>

int main() {
    int suma = 0;

    // Bucle para sumar números pares entre 10 y 50
    for (int i = 10; i <= 50; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    // Mostrar resultado
    printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
