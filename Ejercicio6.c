#include <stdio.h>

int main() {
    float sueldo, nuevo_sueldo;
    const float AUMENTO_MAYOR = 0.12;
    const float AUMENTO_MENOR = 0.15;
    const float LIMITE_SUELDO = 1000.0;

    // Solicitar el sueldo actual del trabajador
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    // Calcular el nuevo sueldo con el aumento correspondiente
    if (sueldo < LIMITE_SUELDO) {
        nuevo_sueldo = sueldo * (1 + AUMENTO_MENOR);
    } else {
        nuevo_sueldo = sueldo * (1 + AUMENTO_MAYOR);
    }

    // Mostrar el nuevo sueldo
    printf("El sueldo con el aumento es: %.2f\n", nuevo_sueldo);

    return 0;
}
