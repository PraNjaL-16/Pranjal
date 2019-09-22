#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=29;j++)
        {
            if(i%2!=0)
            {
                if(j%3==0 || j%5==0)
                {
                    printf("*");
                }
                else
                {
                    printf("0");
                }
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}
