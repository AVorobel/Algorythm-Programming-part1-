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
    int mas1[100];

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

    printf ("index do you want delete?\n");
    scanf ("%i", &i);

    if(i>=0 && i<q)
        printf("done\n");
    else
    {
        printf("number not found\n");
        return 0;
    }

    int mas2[100];

    for(j=0; j<q ; j++)
    {
        mas2[j] = mas1[j];
    }
    for(j=i; j<q ; j++) // "видалення" елементу
    {
        mas2[j] = mas1[j+1];
    }
    for (j=0; j<q-1 ; j++)
    {
        printf("%i\n", mas2[j]); //вивід масиву без заданого елементу
    }

    int mas3[100];

    for (j=0; j<q-1 ; j++)
    {
        mas3[j] = mas2[j];
    }
    for (j=1; j<q-1 ; j++) // додавання нового елемента
    {
        if(mas2[j] == 0)
            continue;
        else if(mas2[j]%2 == 0)
        {
            mas3[j+1] = mas2[j-1]+2;

            for (i=j+1 ; i<q ; i++) //зсув масиву вправо на 1 елемент
            {
                mas3[i+1] = mas2[i];
            }

            break;
        }
    }

    printf ("new array\n");

    for (r=0; r<q ; r++)
    {
        printf("%i\n", mas3[r]); //вивід масиву
    }

    return 0;
}
