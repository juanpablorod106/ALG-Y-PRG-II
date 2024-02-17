#include <stdio.h>
#include <stdlib.h>

void main()
{
    int SOS = 18;
    int *p;
    p=&SOS;

    printf ("Contenido de la memoria: %10d Direccion de memoria:%p Tipo de Dato: int\n",SOS,&SOS);
    printf ("Contenido de la memoria: %p Direccion de memoria:%p Tipo de Dato: int*\n",p,&p);
    printf ("El valor del fkn puntero es: %d",*p);
    return 0;
}
