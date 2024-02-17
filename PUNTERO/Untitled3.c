#include <stdio.h>
#include <stdlib.h>

int main ()
{
int x[100],b,*pa,*pb;
x[50]=10;
pa=&x[50];
b= *pa+1;
b= *(pa+1);
pb=&x[10];
*pb = 0;
*pb +=2;
(*pb) --;
x[0] = *pb--;

    return 0;
}

