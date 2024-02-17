#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor=5;
int *p;
int **pp;
p=&valor;
pp=&p;

printf ("Contenido de memoria: %8d Direccion de memoria: %p Tipo de dato: int\n", valor, &valor );
printf ("Contenido de memoria: %p Direccion de memoria: %p Tipo de dato: int*\n",p,&p);
printf ("Contenido de memoria: %p Direccion de memoria: %p Tipo de dato: int**\n",pp,&pp);
printf ("\n\nEl valor al que apunta mi puntero a entero es:%d",*p);

    return 0;
}
