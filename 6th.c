#include<stdio.h>  
int main()    
{    
int x,y,a;  
a=0; 
printf("Enter a number:");    
scanf("%d",&x);    
while(x>0) 
{    
y=x%10;    
a=a+y;    
x=x/10;    
}    
printf("Sum is=%d",a);    
}   