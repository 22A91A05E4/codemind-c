#include<stdio.h>
int main()
{
    int n1,n2,i=0;
    scanf("%d%d",&n1,&n2);
     while(1)
    {
        i++;
        if(n2*i%n1==0)
        {
            break;
        }
    }
    printf("%d",n2*i);
}