#include <stdio.h>
#include <stdarg.h>

int minimal(int , ...);

int main(void)
{
    printf ("minimal number is %d\n", minimal(10, 4, 65, 84, 1, 98, -4, 8765, 321, 115, -503) );
    printf ("minimal number is %d\n", minimal(5,87,65,98,15,49) );
    printf ("minimal number is %d\n", minimal(12, 54, 98, 4, -36, 874, 656, 12, 80, -48, 159, 784, 15236898) );

    return 0;
}

int minimal (int k, ...)
{
    int min = k;
    va_list minim;
    va_start(minim, k);

    for ( ; k>0; k--)
    {
        int d = va_arg(minim, int);
        if( d < min )
            min = d;
    }

    va_end(minim);
    return min;
}
