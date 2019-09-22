#include<stdio.h>
void main()
{
int i;
for(i=2;i<=100;i=i+2)
{
if(i%3==0||i%5==0||i%15==0)
printf("");
else
printf(" %d ",i);
}
}
