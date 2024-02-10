#include <stdio.h>
#include <math.h>

float cuadrado(float numero) {
  return numero * numero;
}

float cubo(float numero) {
  return numero * numero * numero;
}

float raizCuadrada(float numero) {
  return sqrt(numero);
}

float raizCubica(float numero) {
  return cbrt(numero);
}

int main() {
  float numero;

  // Solicitar el número al usuario
  printf("Introduce un número: ");
  scanf("%f", &numero);

  // Calcular el cuadrado, cubo, raíz cuadrada y raíz cúbica
  float cuadradoNumero = cuadrado(numero);
  float cuboNumero = cubo(numero);
  float raizCuadradaNumero = raizCuadrada(numero);
  float raizCubicaNumero = raizCubica(numero);

  // Mostrar los resultados al usuario
  printf("Cuadrado: %.2f\n", cuadradoNumero);
  printf("Cubo: %.2f\n", cuboNumero);
  printf("Raíz cuadrada: %.2f\n", raizCuadradaNumero);
  printf("Raíz cúbica: %.2f\n", raizCubicaNumero);

  return 0;
}
