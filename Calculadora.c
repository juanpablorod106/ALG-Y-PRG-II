#include <stdio.h>

int sumar(int a, int b) {
  return a + b;
}

int restar(int a, int b) {
  return a - b;
}

int multiplicar(int a, int b) {
  return a * b;
}

int dividir(int a, int b) {
  if (b == 0) {
    printf("Error: división por cero.\n");
    return -1;
  } else {
    return a / b;
  }
}

int main() {
  int num1, num2, opcion, resultado;

  // Mostrar opciones al usuario
  printf("1. Sumar\n");
  printf("2. Restar\n");
  printf("3. Multiplicar\n");
  printf("4. Dividir\n");
  printf("Elige una opción: ");
  scanf("%d", &opcion);

  // Leer los números
  printf("Introduce el primer número: ");
  scanf("%d", &num1);
  printf("Introduce el segundo número: ");
  scanf("%d", &num2);

  // Realizar la operación según la opción elegida
  switch (opcion) {
    case 1:
      resultado = sumar(num1, num2);
      printf("%d + %d = %d\n", num1, num2, resultado);
      break;
    case 2:
      resultado = restar(num1, num2);
      printf("%d - %d = %d\n", num1, num2, resultado);
      break;
    case 3:
      resultado = multiplicar(num1, num2);
      printf("%d * %d = %d\n", num1, num2, resultado);
      break;
    case 4:
      resultado = dividir(num1, num2);
      if (resultado != -1) {
        printf("%d / %d = %d\n", num1, num2, resultado);
      }
      break;
    default:
      printf("Opción no válida.\n");
  }

  return 0;
}
