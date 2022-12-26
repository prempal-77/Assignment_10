// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void printNum(int n);
int main()
{
    printNum(10);
}
void printNum(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}
