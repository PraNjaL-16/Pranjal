#include<stdio.h>
#include<math.h>
void main()
{
    float p,q,r,a,b,c,sq,d;
    printf("enter values p,q,r,a,b,c");
    scanf("%f%f%f%f%f%f",&p,&q,&r,&a,&b,&c);
    sq = sqrt(a*a + b*b);
    d = (a*p + b*q + c)/sq;
    if(d<r)
    {
        printf("line and circle intersect");
    }
    else
    {
        printf("line and circle not intersect");
    }

}
