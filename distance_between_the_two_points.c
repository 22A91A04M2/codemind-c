#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    float d;
    d=sqrt(pow((x1-y1),2)+pow((x2-y2),2));
    printf("%0.4f",d);
}