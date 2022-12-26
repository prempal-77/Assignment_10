// Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void printOddNum(int n);
int main()
{
    printOddNum(20);
}
void printOddNum(int n)
{
    int i;
    for(i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
}
