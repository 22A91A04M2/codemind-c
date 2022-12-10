#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);     //sum=s
    float avg=0;
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
       {
          s=s+a[i];
       }
       avg=(float)s/n;
          {
              printf("%0.2f",avg);
          }
}