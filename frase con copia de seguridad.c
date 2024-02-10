#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void copiarFrase(char *destino, const char *origen) {
  // Comprueba si el tamaño del destino es suficiente
  if (strlen(origen) >= MAX_SIZE) {
    printf("Error: La frase es demasiado larga.\n");
    return;
  }

  // Copia la frase usando strcpy_s
  strcpy_s(destino, MAX_SIZE, origen);
}

int main() {
  char fraseOriginal[MAX_SIZE], fraseCopia[MAX_SIZE];

  // Solicitar la frase al usuario
  printf("Introduce una frase: ");
  gets(fraseOriginal);

  // Copiar la frase de forma segura
  copiarFrase(fraseCopia, fraseOriginal);

  // Mostrar la frase original y la copia
  printf("Frase original: %s\n", fraseOriginal);
  printf("Frase copia: %s\n", fraseCopia);

  return 0;
}
