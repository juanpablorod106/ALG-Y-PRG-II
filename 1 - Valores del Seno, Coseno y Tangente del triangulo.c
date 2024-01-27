#include <stdio.h>
#include <math.h>

int main() {
  // Declaramos las variables
  double angulo;
  double seno, coseno, tangente;

  // Solicitamos al usuario el ángulo
  printf("Ingrese el angulo en grados: ");
  scanf("%lf", &angulo);

  // Calculamos las funciones trigonométricas
  seno = sin(angulo);
  coseno = cos(angulo);
  tangente = tan(angulo);

  // Mostramos los resultados
  printf("El seno del angulo es %.2f\n", seno);
  printf("El coseno del angulo es %.2f\n", coseno);
  printf("La tangente del angulo es %.2f\n", tangente);

  return 0;
}
