#include<stdio.h>
void main()
{
int i,sum,sum1,sum2;
for(i=0;i<=9;i++)
{
if(i%7==0)
printf(" %d ",i);
else
printf("");
}
for(i=10;i<=99;i++)
{
sum1=i%10;
sum2=i/10;
sum=sum1+sum2;
if(sum%7==0)
printf(" %d ",i);
else
printf("");
}
}
