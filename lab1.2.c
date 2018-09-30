#include <stdio.h>
#include <math.h>

int main(void)
{
    double m, n, a, b, c;

    printf ("input m =\n");
    scanf ("%lf", &m);
    printf ("input n =\n");
    scanf ("%lf", &n);

    a = m - ++n;
    b = ++m > --n;
    c = --n < ++m;

    printf ("a = %lf\n", a);
    printf ("b = %lf\n", b);
    printf ("c = %lf\n", c);

    return 0;
}