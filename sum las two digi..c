/* 7 september 2019
   by Pranjal*/
#include<stdio.h>
void main()
{
    long a,b,c,d,sum;
    printf("enter a digit");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    sum = b+d;
    printf("%d",sum);
}
