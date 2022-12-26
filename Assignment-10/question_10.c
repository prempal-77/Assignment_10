/*Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN*/
#include<stdio.h>
void primeFact(int n)
{
    int i=2;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf(" %d ",i);
            n=n/i;
        }
    }
}
int main()
{
    primeFact(36);
}