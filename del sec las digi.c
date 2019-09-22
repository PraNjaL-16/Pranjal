/* 6 september 2019
   by Pranjal*/
#include<stdio.h>
void main()
{
    long a,b,c,d;
    printf("enter a digit");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    d=b/10;
    printf("%d%d",d,c);
}
