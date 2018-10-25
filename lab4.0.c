#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
    int i, j=0, r=0, q;

    printf("enter array lenght\n");
    scanf("%i", &q);
    int mas1[q];

    srand (time (NULL));

    for(j=0 ; j<q ; j++)
    {
        mas1[j] = rand ()%100; //заповнює масив рандомними числами
    }

    printf("array of random numbers\n");

    for (j=0; j<q ; j++)
    {
        printf("%i\n", mas1[j]); //вивід масиву
    }

    printf("what number do you want destroy?\n");
    scanf("%i", &i);

    if(i>0 && i<=q)
        printf("just a moment...\n");
    else
    {
        printf("fail of operation, number is not found\n");
        return 0;
    }

    for (r=0; r<q ; r++)
    {
        mas1[i-1] = 0;
        printf("%i\n", mas1[r]);
    }

    int mas2[q];
    for(i=0 ; i<q ; i++)
    {
        mas2[i] = mas1[i];
    }
    printf("adding new element\n");

    int mas3[100];

    for(i=0 ; i<q-1 ; i++)
    {
        mas3[i] = mas2[i];
    }

    for(i=0 ; i<q ; i++)
    {
        if(mas2[i]==0)
            continue;
        if(mas2[0]%2 == 0)
        {
            mas3[i+1] = (mas2[q-1]+2);
            break;
        }
        else if(mas2[i]%2 == 0)
        {
            for(int m = i+1 ; m<q+1 ; m++)
            {
                mas3[m+1] = mas2[m];
            }

            mas3[i+1] = (mas2[i-1]+2);
            break;
        }
    }

    printf("new array\n");
    for(int a=0 ; a<q+1 ; a++)
    {
        printf("%d\n", mas3[a]);
    }

    return 0;
}