#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
    int t,x;
    scanf("%d%d",&t,&x);
    if(x<=3)
    {
        printf("LIGHT
");
    }
    else if(x<=7)
    {
        printf("MODERATE
");
    }
    else
    {
        printf("HEAVY
");
    }
    }
}