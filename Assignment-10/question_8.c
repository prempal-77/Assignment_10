/* Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>
int fact(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int per(int n, int r)
{
    return fact(n)/(fact(n-r));
}
int main()
{
    printf("permutation = %d",per(10,2));
}