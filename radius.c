/* 6 september 2019
   by Pranjal*/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    int g,f,r,a1,a2;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    g = (-a/2);
    f = (-b/2);
    printf("centre is (%d,%d) ",g,f);
    r = sqrt(g*g + f*f - c);
    printf("\n radius is %d",r);

}
