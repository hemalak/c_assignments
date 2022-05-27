#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	switch(num){
		case 1:
			printf("\nFOOD ITEM : PIZZA. \nPRICE : Rs.239.");
			break;
	    case 2:
		    printf("\nFOOD ITEM : BURGER. \nPRICE : Rs.129.");
			break;	
		case 3:
			printf("\nFOOD ITEM : PASTA. \nPRICE : Rs.179.");
		    break;
		case 4:
			printf("\nFOOD ITEM : FRENCH FRIES. \nPRICE : Rs.99.");
			break;
		case 5:
			printf("\nFOOD ITEM : SANDWICH. \nPRICE : Rs.149");
		default:
			printf("NO ITEMS FOUND");
}}