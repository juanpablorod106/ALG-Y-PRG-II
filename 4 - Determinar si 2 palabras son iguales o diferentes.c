#include <stdio.h>
#include <string.h>

int main() {
  // Declaramos las variables
  char palabra1[256];
  char palabra2[256];

  // Solicitamos las palabras al usuario
  printf("Ingrese la primera palabra: ");
  scanf("%s", palabra1);
  printf("Ingrese la segunda palabra: ");
  scanf("%s", palabra2);

  // Comparamos las palabras
  if (strcmp(palabra1, palabra2) == 0) {
    printf("Las palabras son iguales.\n");
  } else {
    printf("Las palabras son diferentes.\n");
  }

  return 0;
}
