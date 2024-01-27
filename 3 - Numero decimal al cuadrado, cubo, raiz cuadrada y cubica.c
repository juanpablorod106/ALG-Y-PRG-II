#include <stdio.h>
#include <math.h>

int main() {
  // Declaramos las variables
  float numero;
  float cuadrado, cubo, raiz_cuadrada, raiz_cubica;

  // Solicitamos al usuario el número
  printf("Ingrese un numero: ");
  scanf("%f", &numero);

  // Calculamos los valores
  cuadrado = numero * numero;
  cubo = numero * numero * numero;
  raiz_cuadrada = sqrt(numero);
  raiz_cubica = cbrt(numero);

  // Mostramos los resultados
  printf("El cuadrado del numero es %.2f\n", cuadrado);
  printf("El cubo del numero es %.2f\n", cubo);
  printf("La raíz cuadrada del numero es %.2f\n", raiz_cuadrada);
  printf("La raíz cúbica del numero es %.2f\n", raiz_cubica);

  return 0;
}
