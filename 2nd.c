#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value A :");
	scanf("%d",&a); //getting values from the user
	printf("Enter value B :");
	scanf("%d",&b); //getting values from the user
	printf("Before swapping.\n The value of a : %d.\n The value of b : %d.",a,b);
	a=a+b; // a=20 and b=15, a=20+15=35 
	b=a-b; // b=35-15=20
	a=a-b; // a=35-20=15
	printf("\nAfter swapping.\n The value of a : %d.\n The value of b : %d.",a,b);
}
	