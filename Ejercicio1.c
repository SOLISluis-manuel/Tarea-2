#include <stdio.h>

int main() {
    float num1, num2;
    float suma, resta, multiplicacion;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    // Realizar operaciones
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Mostrar los resultados
    printf("La suma de %.2f y %.2f es: %.2f\n", num1, num2, suma);
    printf("La resta de %.2f y %.2f es: %.2f\n", num1, num2, resta);
    printf("La multiplicación de %.2f y %.2f es: %.2f\n", num1, num2, multiplicacion);

    return 0;
}
