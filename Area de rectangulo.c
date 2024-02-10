#include <stdio.h>

// Funcion para calcular el area de un rectangulo
double calculate_rectangle_area(double base, double height) {
    return base * height;
}

int main() {
    double base, height;

    printf("Base de un rectangulo: ");
    scanf("%lf", &base);

    printf("Altura del rectangulo: ");
    scanf("%lf", &height);

    double area = calculate_rectangle_area(base, height);

    if (area > 40 && height > 10) {
        printf("El área es mayor que 40 y la altura es mayor que 10.\n");
    }

    printf("El area del rectangulo es %.2lf\n", area);

    return 0;
}
