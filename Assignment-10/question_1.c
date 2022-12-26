//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float radius);
int main(){

  int  r=23;
  float a=area(r);
  printf("Area = %f",a);    
}
float area(float radius)
{
    return 3.14*radius*radius;
}