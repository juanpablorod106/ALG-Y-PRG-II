#include <stdio.h>
#include <math.h>

// Funcion para obtener el redondeo del entero
int round_up(float value) {
    return (int)ceil(value);
}

// Funcion para obtener el redondeo hacia abajo del entero
int round_down(float value) {
    return (int)floor(value);
}

// Funcion para obtener el valor entero mas cercano
int closest_integer(float value) {
    return round(value);
}

int main() {
    float number;
    int option;

    do {
        printf("\n1. Redondear hacia arriba\n");
        printf("2. Redondear hacia abajo\n");
        printf("3. Ver entero mas cercano\n");
        printf("4. Exit\n");
        printf("Elije una opcion: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Ingresa un numero decimal: ");
                scanf("%f", &number);
                printf("El valor del redondeo es %d\n", round_up(number));
                break;
            case 2:
                printf("Ingresa un numero decimal: ");
                scanf("%f", &number);
                printf("El valor del redondeo hacia abajo es %d\n", round_down(number));
                break;
            case 3:
                printf("Ingresa un numero decimal: ");
                scanf("%f", &number);
                printf("El entero mas cercano es %d\n", closest_integer(number));
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida, elija de nuevo\n");
        }
    } while (option != 4);

    return 0;
}
