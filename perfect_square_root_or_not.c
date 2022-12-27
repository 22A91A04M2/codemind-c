#include<math.h>
#include<stdio.h>
int main()
{
    int n,rt;
    scanf("%d",&n);
    rt=sqrt(n);
    if(rt==sqrt(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}