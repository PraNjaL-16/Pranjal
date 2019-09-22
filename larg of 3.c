#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 no.");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("largest is %d",a);
        }
    }
    else
    {
        if(b>c)
        {
            printf("largest is %d",b);
        }
        else
        {
            printf("largest is %d",c);
        }
    }
}
