/* 7 september
   by Pranjal */
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e;
    float sq,dis;
    printf("enter the values of a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sq = sqrt(c*c + d*d);
    dis = (a*c+b*d+e)/sq;
    printf("distance %f",dis);

}

