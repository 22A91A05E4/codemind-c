#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,s;
        scanf("%d",&n);
        s=sqrt(n);
        if(s*s==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}