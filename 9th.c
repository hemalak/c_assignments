#include <stdio.h>
int main()
{
  int array1[3][3],i,j,sum=0;
   printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("[%d] [%d] ",i,j);
	      scanf("%d",&array1[i][j]);
      }
  }  
 printf("\n\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
        {
           printf("%d\t",array1[i][j]);
        }
        printf("\n\n");
  }
        for(i=0;i<3;i++)
		{
      for(j=0;j<3;j++)
	   {
           if(i==j)
           {
           	sum = sum+array1[i][j];
		   }
       }            
	   }
printf("\nsum of diagnols = %d",sum);
}