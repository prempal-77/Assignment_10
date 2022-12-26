//. Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simpleInterest(float P,float R,float T)
{
    return (P*R*T)/100;
}
int main()
{
    printf("simple interest=%.2lf",simpleInterest(1500,8,5));
    return 0;
}