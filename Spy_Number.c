#include<stdio.h>
int main()
{
    int n,s=0,p=1,d;
    scanf("%d",&n);
    for(;n>0;)
    {
        d = n%10;
        s +=d;
        p*=d;
        n/=10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}