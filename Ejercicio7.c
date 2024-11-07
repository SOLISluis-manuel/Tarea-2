#include <stdio.h>

int main() {
    float distancia_ida, distancia_total, precio_sin_descuento, precio_final;
    int dias_estancia;
    const float PRECIO_POR_KM = 0.23;
    const float DESCUENTO = 0.30;
    const float LIMITE_DISTANCIA = 800.0;
    const int LIMITE_DIAS = 7;

    // Solicitar la distancia de ida y el número de días de estancia
    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distancia_ida);
    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &dias_estancia);

    // Calcular la distancia total y el precio sin descuento
    distancia_total = 2 * distancia_ida;
    precio_sin_descuento = distancia_total * PRECIO_POR_KM;

    // Calcular el precio final aplicando el descuento si corresponde
    if (dias_estancia > LIMITE_DIAS && distancia_total > LIMITE_DISTANCIA) {
        precio_final = precio_sin_descuento * (1 - DESCUENTO);
    } else {
        precio_final = precio_sin_descuento;
    }

    // Mostrar el precio final del ticket
    printf("El precio del ticket ida y vuelta es: %.2f\n", precio_final);

    return 0;
}
