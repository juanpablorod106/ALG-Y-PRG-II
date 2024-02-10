#include <stdio.h>
#include <string.h>

// Funcion que compara 2 cadenas
int compare_strings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

int main() {
    char palabra1[100], palabra2[100];
    int option;

    do {
        printf("\n1. Compare 2 palabras\n");
        printf("2. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Ingrese la primera palabra: ");
                scanf("%s", palabra1);
                printf("Ingrese la segunda palabra: ");
                scanf("%s", palabra2);

                if (compare_strings(palabra1, palabra2) == 0) {
                    printf("Las palabras son iguales\n");
                } else {
                    printf("Las palabras son diferentes\n");
                }
                break;
            case 2:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida, porfavor elija de nuevo\n");
        }
    } while (option != 2);

    return 0;
}
