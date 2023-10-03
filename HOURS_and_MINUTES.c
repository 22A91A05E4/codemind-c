#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x = n/60;
    int y = n%60;
    printf("%d Hour(s) %d Minute(s)",x,y);
}