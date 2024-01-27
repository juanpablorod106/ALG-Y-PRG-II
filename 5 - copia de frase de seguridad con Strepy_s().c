#include <stdio.h>
#include <string.h>

int main() {
  // Declaramos las variables
  char frase[256];
  char copia_de_seguridad[256];

  // Solicitamos la frase al usuario
  printf("Ingrese una frase: ");
  scanf("%s", frase);

  // Creamos la copia de seguridad
  strcpy(copia_de_seguridad, frase);

  // Mostramos la frase y la copia de seguridad
  printf("Frase original: %s\n", frase);
  printf("Copia de seguridad: %s\n", copia_de_seguridad);

  return 0;
}
