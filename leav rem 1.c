#include<stdio.h>
void main()
{
int a,c;
for(a=0;a<=100;a++)
{
c=a/10;
if(c%3==1)
printf(" %d ",a);
else
printf("");
}
}
