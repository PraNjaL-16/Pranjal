#include<stdio.h>
void main()
{
int i;
for(i=0;i<=9;i++)
{
if(i%5==0||i%6==0||i%7==0||i%8==0)
printf(" %d ",i);
else
printf("");
}
for(i=10;i<=200;i++)
{
if(i%10==5||i%10==6||i%10==7||i%10==8)
printf(" \n%d ",i);
else
printf("");
}
}
