#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=0,k2=0,a,b;
    scanf("%d",&n);
   // printf("0 ");
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
           a=2*k1;
           printf("%d ",a);
           k1++;
        }
        else
        {
            b=k2+1;;
            printf("%d ",b-1);
            k2++;
        }
    }
}