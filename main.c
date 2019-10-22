#include <stdio.h>
#include <math.h>

int main(void)
{
    double a= 2.1, s= 0;


    for ( int i = 1; i < 5; i++ )
    {
        s+= pow(a*i+2,2);

    }

    printf("%f\n", s);
<<<<<<< HEAD
=======

>>>>>>> 5343dee3d269d23543b022e484ab055239f533ab
    return 0;
}

