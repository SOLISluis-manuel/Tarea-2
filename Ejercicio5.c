#include <stdio.h>

int main() {
    float monto_compra, monto_final;
    const float DESCUENTO = 0.08;
    const float LIMITE_DESCUENTO = 2500.0;

    // Solicitar al usuario el monto de la compra
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &monto_compra);

    // Calcular el monto final aplicando el descuento si es necesario
    if (monto_compra > LIMITE_DESCUENTO) {
        monto_final = monto_compra * (1 - DESCUENTO);
    } else {
        monto_final = monto_compra;
    }

    // Mostrar el monto a pagar
    printf("El monto que el cliente debe pagar es: %.2f\n", monto_final);

    return 0;
}
