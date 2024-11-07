#include <stdio.h>
#define PI 3.14159

int main() {
    float radio, area, circunferencia;

    // Solicitar al usuario que ingrese el radio del círculo
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    // Calcular el área y la circunferencia
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    // Mostrar los resultados
    printf("El área del círculo es: %.2f\n", area);
    printf("La circunferencia del círculo es: %.2f\n", circunferencia);

    return 0;
}
