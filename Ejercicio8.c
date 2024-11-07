#include <stdio.h>

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números enteros
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);

    // Determinar si uno de los números es divisor del otro
    if (num1 != 0 && num2 % num1 == 0) {
        printf("%d es divisor de %d\n", num1, num2);
    } else if (num2 != 0 && num1 % num2 == 0) {
        printf("%d es divisor de %d\n", num2, num1);
    } else {
        printf("Ninguno de los números es divisor del otro.\n");
    }

    return 0;
}
