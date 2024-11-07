#include <stdio.h>

int main() {
    float cantidad_invertida, tasa_interes, monto_final;

    // Solicitar al usuario que ingrese la cantidad invertida y la tasa de interés mensual
    printf("Ingrese la cantidad invertida: ");
    scanf("%f", &cantidad_invertida);
    printf("Ingrese la tasa de interés mensual (en porcentaje): ");
    scanf("%f", &tasa_interes);

    // Convertir la tasa de interés a decimal y calcular el monto final
    monto_final = cantidad_invertida * (1 + (tasa_interes / 100));

    // Mostrar el resultado
    printf("El monto total al finalizar el mes es: %.2f\n", monto_final);

    return 0;
}
