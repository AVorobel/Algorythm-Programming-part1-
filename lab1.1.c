#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf ("input a =\n");
    scanf ("%lf", &a);
    printf ("input b =\n");
    scanf ("%lf", &b);

    c = (pow(a-b,3)-(pow(a,3)-3*a*pow(b,2)))/(pow(b,3)-3*pow(a,2)*b);

    printf ("c = %lf\n", c);

    return 0;
}
//float с = 1.220703
//double с = 1.000000