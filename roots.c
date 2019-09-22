#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,d1,r1,r2;
    printf("enter value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b - 4*a*c;
    d1 = sqrt(b*b - 4*a*c);
    r1 = (-b + d1)/(2*a);
    r2 = (-b - d1)/(2*a);
    if(d>0)
    {
        printf("%f %f",r1,r2);
    }
    else if(d==0)
    {
        printf("%f",r1);
    }
    else if(d<0)
    {
        printf("(%f %f) (%f %f) ",-b/2*a,sqrt(-d)/2*a,-b/2*a,-sqrt(-d)/2*a);
    }
}
