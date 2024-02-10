#include <stdio.h>

float convertirFahrenheitACelsius(float fahrenheit) {
  return (fahrenheit - 32) * 5 / 9;
}

float convertirCelsiusAFahrenheit(float celsius) {
  return (celsius * 9 / 5) + 32;
}

int main() {
  float temperatura, resultado;
  int opcion;

  // Mostrar opciones al usuario
  printf("1. Convertir Fahrenheit a Celsius\n");
  printf("2. Convertir Celsius a Fahrenheit\n");
  printf("Elige una opción: ");
  scanf("%d", &opcion);

  // Leer la temperatura
  printf("Introduce la temperatura: ");
  scanf("%f", &temperatura);

  // Convertir la temperatura según la opción elegida
  switch (opcion) {
    case 1:
      resultado = convertirFahrenheitACelsius(temperatura);
      printf("%.2f grados Fahrenheit equivalen a %.2f grados Celsius\n", temperatura, resultado);
      break;
    case 2:
      resultado = convertirCelsiusAFahrenheit(temperatura);
      printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit\n", temperatura, resultado);
      break;
    default:
      printf("Opción no válida.\n");
  }

  return 0;
}
