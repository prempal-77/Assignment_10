/*. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)
*/
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
int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r ));
}
int main()
{
    printf("combination = %d",comb(10,2));
}