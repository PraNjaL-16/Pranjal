/* 6 september 2019
   by Pranjal*/
#include<stdio.h>
#include<math.h>
void main()
{
    float i,b,c,x,y,z;
    float ang,res;
    printf("enter the value of i,b,c");
    scanf("%f%f%f",&i,&b,&c);
    x = (b*b + c*c - i*i);
    y = 2*b*c;
    z = x/y;
    ang = acos(z);
    res = (ang*180*7)/22;
    printf("angle in radian is %f \nangle is degree is %f",ang,res);
}
