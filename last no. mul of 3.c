#include<stdio.h>
void main()
{
int i;
for(i=0;i<=9;i++)
{
if(i%3==0)
printf(" %d ",i);
else
printf("");
}
for(i=10;i<=99;i++)
{
if(i%10==3||i%10==6||i%10==9||i%10==0)
printf(" %d ",i);
else
printf("");
}
for(i=100;i<=999;i++)
{
if(i%100==3||i%100==6||i%100==9||i%100==0)
printf(" %d ",i);
else
printf("");
}
}
