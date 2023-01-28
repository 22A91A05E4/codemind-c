#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    int x,y,a,b;
    scanf("%d%d",&x,&y);
    a=2*x;
    b=5*y;
    if(a>b)
    {
        printf("Chocolate
");
    }
    else if(a<b)
    {
        printf("Candy
");
    }
    else
    {
        printf("Either
");
    }
    }
}