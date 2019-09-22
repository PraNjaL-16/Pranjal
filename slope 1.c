#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    float slope = -a/b;
    printf("slope is %f",slope);
    if(b==0)
    {
        printf("line is vertical");
    }
}
