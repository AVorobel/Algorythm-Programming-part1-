#include <stdio.h>
#include <math.h>
#define M_E 2.718281
#define pi 3.141592

float factorial (float k)
{
    float f=1;
    for ( ;k>0;k--)
    {
        f = f*k;
    }
    return f;
}

int main()
{
    int n=1;
    double a, x, y, SM = 0.0;

    for ( x = 0.1 ; x <= 1 ; x+=0.09)
        {
             y = pow(M_E, (x*cos(pi/4))) * (cos(x*sin(pi/4))); //формула

             do
             {
                  a = (((cos(n*(pi/4))/factorial(n))*pow(x, n))) + ((cos((n+1)*(pi/4))/factorial(n+1))*pow(x,(n+1)));//сума
                  n++;
                  SM+=a;
             }
             while ( n>=0 && n<=25 );
        }
    printf ("%f\n", SM); //вивід
    return 0;
}
