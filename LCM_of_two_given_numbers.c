#include<stdio.h>
int main()
{
    int i,a,b,n,lcm=1;
    scanf("%d%d",&a,&b);
    n=(a>b) ? a:b;
    while(1)
    {
        if(n%a==0 && n%b==0)
        {
            lcm=n;
            break;
        }
        n++;
    }
    printf("%d",lcm);
}