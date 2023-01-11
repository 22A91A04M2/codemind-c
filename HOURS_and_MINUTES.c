#include<stdio.h>
int main()
{
    int m,h,rm;
    scanf("%d",&m);
    h=m/60;
    rm=m%60;
    printf("%d Hour(s) %d Minute(s)",h,rm);
}