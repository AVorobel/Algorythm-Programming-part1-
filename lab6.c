#include <stdio.h>
#include <string.h>

int main(void)
{
    char txt [255] ;
    printf ("input text (max = 255 symbols) =>  ");
    fgets(txt, 255, stdin); 

    char scanNum [] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; 
    char nums [255];
    char txtEnd[255];

    int k = 0, f = 0, s = 0;
    for (int j = 0; j < strlen (txt) ; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            if ( txt[j] == scanNum[i] )
            {
                nums[k] = txt[j]; 
                k++;
                f++;
            }
        }
        
         if (f == 0)
            {
            	txtEnd[s] = txt[j];
            	s++;
        	}
        	
            f = 0;
    }

    strncat(txtEnd, nums, k); 

    printf("\n");
    for (int i = 0; i < strlen(txtEnd); i++) 
	{
        printf ("%c", txtEnd[i]);
    }
    printf("\n");

    return 0;
}
