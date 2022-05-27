#include <stdio.h>
int lcm(int x, int y);
int main()
{
    int a, b, LCM;
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &a, &b);
    if(a > b)
        LCM = lcm(b, a);
    else
        LCM = lcm(a, b);
    printf("LCM of %d and %d = %d", a, b, LCM);
    return 0;
}
int lcm(int x, int y)
{
    static int n = 0;
    n = n + y;
    if((n % x == 0) && (n % y == 0))
    {
        return n;
    }
    else 
    {
        return lcm(x, y);
    }
}