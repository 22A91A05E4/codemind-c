#include<stdio.h>
int main()
{
    int Num1,Num2;
    scanf("%d%d",&Num1,&Num2);
    float avg;
    avg=(Num1+Num2)/2.0;
    printf("Average of %d and %d is: %0.2f",Num1,Num2,avg);
}