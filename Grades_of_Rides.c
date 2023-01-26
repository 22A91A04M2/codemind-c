#include<stdio.h>
int main()
{
    int h,s,spf;
    scanf("%d%d%d",&h,&s,&spf);
    if(h>50 && s>60 && spf>100)
    {
        printf("10");
    }
    else if(h>50 && s>60)
    {
        printf("9");
    }
    else if(s>60 && spf>100)
    {
        printf("8");
    }
    else if(h>50 && spf>100)
    {
        printf("7");
    }
    else if(h>50 || s>60 || spf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}