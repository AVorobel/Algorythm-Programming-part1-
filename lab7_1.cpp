#include <stdio.h>
#include <complex.h>

double minus(double a, double b)
{
    return a-b;
}

double complex minus(double complex a, double complex b)
{
    return a-b;
}

int main()
{
    double m;
    double n;
    double real1;
    double imagine1;
    double real2;
    double imagine2;
    double complex z1;
    double complex z2;

    printf("input first number : ");
    scanf("%lf", &m);

    printf("input second number : ");
    scanf("%lf", &n);

    printf("%.2f - %.2f = %.2f \n", m, n, minus(m,n));

    printf("input first complex number (re + im): ");
    scanf("%lf %lf", &real1, &imagine1);

    printf("input second complex number (re + im): ");
    scanf("%lf %lf", &real2, &imagine2);

    z1 = real1 + imagine1*I;
    z2 = real2 + imagine2*I;

    z1 = minus(z1, z2);

    printf("(%.2lf + %.2lfi) - (%.2lf + %.2lfi) = %.2f + %.2fi \n", real1, imagine1, real2, imagine2, creal(z1), cimag(z1));

    return 0;

}
