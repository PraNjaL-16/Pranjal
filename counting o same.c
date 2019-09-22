#include<stdio.h>
void main()
{
    int a,b,c,d,x,e=0;
    printf("enter values of a,b,c,d,x");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
    if(x==a)
    {
        e++;
    }
    else if(x==b)
    {
        e++;
    }
    else if(x==c)
    {
        e++;
    }
    else if(x==d)
    {
        e++;
    }
    printf("%d",e);
}
