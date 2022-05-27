#include<stdio.h>
#include<math.h>
int Prime(int i,int j)
{
    if(j==i)
        return 0;
    else
        if(j%i==0)
            return 1;
    else{
        return Prime(i+1,j);
    }
}
int main()
{
    int j;
    printf("Enter your Number:");
    scanf("%d",&j);

    if(Prime(2,j)==0)
        printf("%d is a Prime Number",j);
    else
        printf("%d is not a Prime Number",j);
}