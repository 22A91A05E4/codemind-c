#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,b,p;
        scanf("%d%d",&a,&b);
        p=(a/10);
        printf("%d
",b*p);
    }
}