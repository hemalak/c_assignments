#include <stdio.h>  
int main()  
{  
    int i, j, x;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &x);  
    printf("\n");  
    for (i = 1; i <= x; i++) 
    {  
        for (j = 1; j <= i; j++) 
        {  
            printf ("01");  
        }  
        printf ("\n");   
    }       
}  