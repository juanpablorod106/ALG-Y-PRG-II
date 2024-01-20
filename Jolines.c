#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double t = 60 * 3.1415/180;
    double x = 5 * cos (t);
    double y = 5 * sin (t);

    printf ("Conversion de t a radiales: %d", x,y);

    return 0;
}
