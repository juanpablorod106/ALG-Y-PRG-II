#include <stdio.h>

int main() {
  // Declaramos las variables
  float numero;
  int entero_mas_cercano;
  float redondeado_arriba;
  float redondeado_abajo;

  // Solicitamos al usuario el número
  printf("Ingrese un numero decimal: ");
  scanf("%f", &numero);

  // Calculamos el entero más cercano
  entero_mas_cercano = (int)numero;

  // Calculamos el redondeo hacia arriba
  redondeado_arriba = (int)(numero + 0.5);

  // Calculamos el redondeo hacia abajo
  redondeado_abajo = (int)(numero - 0.5);

  // Mostramos los resultados
  printf("El numero redondeado hacia arriba es %.2f\n", redondeado_arriba);
  printf("El numero redondeado hacia abajo es %.2f\n", redondeado_abajo);
  printf("El entero más cercano al numero es %d\n", entero_mas_cercano);

  return 0;
}
