#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double base, altura, areadeltriangulo, c;

    printf("Cual es la base del triangulo: ");
    scanf("%lf",&base);
    printf(" Cual es la altura del triangulo: ");
    scanf("%lf", &altura);
    printf(" Cual es la angulo del triangulo: ");
    scanf("%lf", &c);

    areadeltriangulo = (0.5) * altura * base * sin(c);

    printf ("%lf",(0.5) * altura * base * sin(c*3.14/180));

    return 0;
}
