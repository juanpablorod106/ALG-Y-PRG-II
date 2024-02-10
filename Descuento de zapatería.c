#include <stdio.h>

float calcularDescuento(int cantidadZapatos) {
  float precioZapato = 80.0f;
  float totalSinDescuento = cantidadZapatos * precioZapato;
  float descuento = 0.0f;

  if (cantidadZapatos > 30) {
    descuento = 0.4f;
  } else if (cantidadZapatos > 20) {
    descuento = 0.2f;
  } else if (cantidadZapatos > 10) {
    descuento = 0.1f;
  }

  return totalSinDescuento * descuento;
}

int main() {
  int cantidadZapatos;

  // Solicitar la cantidad de zapatos al usuario
  printf("Introduce la cantidad de zapatos a comprar: ");
  scanf("%d", &cantidadZapatos);

  // Calcular el descuento
  float descuentoAplicado = calcularDescuento(cantidadZapatos);

  // Mostrar el total sin descuento, el descuento aplicado y el total con descuento
  float totalSinDescuento = cantidadZapatos * 80.0f;
  float totalConDescuento = totalSinDescuento - descuentoAplicado;
  printf("Total sin descuento: $%.2f\n", totalSinDescuento);
  printf("Descuento aplicado: $%.2f\n", descuentoAplicado);
  printf("Total con descuento: $%.2f\n", totalConDescuento);

  return 0;
}
