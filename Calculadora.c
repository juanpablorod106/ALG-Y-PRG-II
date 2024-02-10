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
    printf("Error: divisi�n por cero.\n");
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
  printf("Elige una opci�n: ");
  scanf("%d", &opcion);

  // Leer los n�meros
  printf("Introduce el primer n�mero: ");
  scanf("%d", &num1);
  printf("Introduce el segundo n�mero: ");
  scanf("%d", &num2);

  // Realizar la operaci�n seg�n la opci�n elegida
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
      printf("Opci�n no v�lida.\n");
  }

  return 0;
}
