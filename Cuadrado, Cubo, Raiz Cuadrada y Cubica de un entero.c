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

  // Solicitar el n�mero al usuario
  printf("Introduce un n�mero: ");
  scanf("%f", &numero);

  // Calcular el cuadrado, cubo, ra�z cuadrada y ra�z c�bica
  float cuadradoNumero = cuadrado(numero);
  float cuboNumero = cubo(numero);
  float raizCuadradaNumero = raizCuadrada(numero);
  float raizCubicaNumero = raizCubica(numero);

  // Mostrar los resultados al usuario
  printf("Cuadrado: %.2f\n", cuadradoNumero);
  printf("Cubo: %.2f\n", cuboNumero);
  printf("Ra�z cuadrada: %.2f\n", raizCuadradaNumero);
  printf("Ra�z c�bica: %.2f\n", raizCubicaNumero);

  return 0;
}
