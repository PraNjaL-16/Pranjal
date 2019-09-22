/* 6 september 2019
   by Pranjal*/
#include<stdio.h>
#include<math.h>
void main()
{
    int h,k,r,s,x,y;
    printf("enter the value of h,k,r,s");
    scanf("%d%d%d%d",&h,&k,&r,&s);
    if(s>h)
    {
     x = s-h;
    }
    else
    {
     x = h-s;
    }
    y = 2 * sqrt (r*r - x*x);
    printf("%d",y);
}

