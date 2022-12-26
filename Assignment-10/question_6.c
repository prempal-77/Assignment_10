// Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int n);
int main()
{
    int n=6,x;
    x=fact(n);
    printf("factorial is =%d",x);
}
int fact(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}