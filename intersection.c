/* 6 september 2019
   by Pranjal*/
#include<stdio.h>
void main()
{
    int a,b,c,p,q,r,x,y;
    printf("enter the value of a,b,c,p,q,r");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
    x = (b*r*a - c*q*a)/(a*a*q - a*p*b);
    y = (p*c - r*a)/(q*a - p*b);
    printf("point of insec is (%d,%d)",x,y);
}
