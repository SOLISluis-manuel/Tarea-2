#include <stdio.h>
#define TASA_CAMBIO 11.96

int main() {
    float dolares, pesos;

    // Solicitar al usuario que ingrese la cantidad en dólares
    printf("Ingrese la cantidad en dólares: ");
    scanf("%f", &dolares);

    // Calcular la conversión a pesos
    pesos = dolares * TASA_CAMBIO;

    // Mostrar el resultado
    printf("%.2f dólares equivalen a %.2f pesos.\n", dolares, pesos);

    return 0;
}
