#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

float seno(float angulo) {
  return sin(angulo * PI / 180);
}

float coseno(float angulo) {
  return cos(angulo * PI / 180);
}

float tangente(float angulo) {
  return tan(angulo * PI / 180);
}

int main() {
  float angulo;

  // Solicitar el ángulo al usuario
  printf("Introduce un angulo en grados: ");
  scanf("%f", &angulo);

  // Calcular el seno, coseno y tangente
  float senoAngulo = seno(angulo);
  float cosenoAngulo = coseno(angulo);
  float tangenteAngulo = tangente(angulo);

  // Mostrar los resultados al usuario
  printf("Seno: %.2f\n", senoAngulo);
  printf("Coseno: %.2f\n", cosenoAngulo);
  printf("Tangente: %.2f\n", tangenteAngulo);

  return 0;
}
