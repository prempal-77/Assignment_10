/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int evenOrodd(int n);
int main()
{
    int n=62;
    if(evenOrodd(n)==1)
    {
        printf("enen");
    }
    else
    {
        printf("odd");
    }
}
int evenOrodd(int n)
{
    return (n%2==0);
}