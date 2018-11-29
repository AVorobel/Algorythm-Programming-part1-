#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void write_file ();
void copy_file();
void consonant();

int main ()
{
    FILE *f;
    FILE *fc;

    int q;
    char * filename = "my_new_file.txt";

    fc = fopen("my_new_file_copy.txt", "wt");
    f = fopen(filename, "rt");

    printf ("how much rows? (each row maximum - 512 symbols)\n");
    scanf ("%d", &q);

    write_file(filename, f, fc, q);
    copy_file(filename, f, fc, q);
    consonant(fc);

    fclose(f);
    fclose(fc);

	return 0;
}

void write_file(char* filename, FILE *f, FILE *fc, int q)
{
    f = fopen(filename, "rt");

    int i;

	if ( (f = fopen(filename, "wt")) != NULL )
	{
        printf ("file created\n_____________________\n");
    }
    else
    {
        fprintf(stderr, "fail of operation\n");
        exit(1);
    }

	printf ("write : \n");

	for (i=0; i<q+1; i++)
	{
		char text [512];
		fgets (text, 512, stdin);
		fprintf (f, "%s", text);
	}
    printf ("\n---succesfuly writed---\n");

    fclose(f);
}

void copy_file (char* filename, FILE *f, FILE *fc, int q)
{
    int col = 512*q;
	char arr[col];
    fc = fopen("my_new_file_copy.txt", "wt");
    f = fopen(filename, "rt");

    if ( (f != NULL) && (fc  != NULL) )
    {
        int n,k;
        printf ("copy from [number] to [number]\ninput numbers\n");
        scanf ("%d%d", &n, &k);

        int i=0;
        int num = fread (arr ,1 ,sizeof(arr) , f);

        fseek(f, 0, SEEK_SET);

    	while (fgets(arr,512,f)!=NULL)
    	{
            i++;
            if( i >= n+1 && i <= k+1)
            {
                fputs(arr,fc);
            }
            else if(i > k)
                break;
        }

    	if (!feof(fc))
    	    printf ("\n---file copied---\n");
    	else
    	    printf("\n!_fail of copying_!\n");
    }
    else
        printf ("\n!_fail of copying_!\n");

    fclose(f);
    fclose(fc);
}

void consonant(FILE* fc)
{
    fc = fopen("my_new_file_copy.txt", "rt");

    if (fc != NULL)
    {
        int count=0;
        int num1;
        do
        {
            num1 = getc(fc);

            if (isalpha(num1) && num1 != 'e' && num1 != 'y' && num1 != 'u' && num1 != 'o' && num1 != 'a' && num1 != 'i' && num1 != 'E'
            && num1 != 'Y' && num1 != 'U' && num1 != 'O' && num1 != 'A' && num1 != 'I')
                    count++;
        }
        while(num1 != EOF);

        printf ("there are/is %d consonant letter(s)\n", count);
    }
    fclose(fc);
}
