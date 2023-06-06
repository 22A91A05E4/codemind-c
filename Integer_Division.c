#include<stdio.h>
#include<math.h>
int main()
{
    long long int x;
    scanf("%lld",&x);
    if(x>0)
    {
        printf("%lld",x/10);   
    }
    else if(x%10==0 && x<0)
    {
        printf("%lld",(x/10));
    }
    else if(x%10!=0 && x<0)
    {
        printf("%lld",(x/10)-1);
    }
    else
    {
        printf("0");
    }
}