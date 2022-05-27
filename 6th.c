#include <stdio.h> 
int Sum(int num);
int main()
{
    int x, sum,b;   
    printf(" Enter a number : ");
    scanf("%d", &x);
    sum = Sum(x); 
    printf("Sum of digits of = %d\n\n", sum);
}
int Sum(int x)
{
    int b;
	if(x == 0)
        return 0;
    b=(x % 10) + Sum(x / 10);
    return b;
}