/* 6 september 2019
   by Pranjal*/
#include<stdio.h>
#include<math.h>
void main()
{
    long a,b,c,d;
    float dis;
    printf("enter a four coordinates (X1,Y1) , (X2,Y2)");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    dis= sqrt((a-c)*(a-c) + (b-d)*(b-d));
    printf("%f",dis);
}
