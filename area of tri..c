/* 7 september 2019
   by Pranjal*/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e,f;
    int area;
    printf("enter a four coordinates (X,Y)");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    area = ( a*(d-f) - c*(b-f) + e*(b-d) )/2;
    printf("%d",area);
}
