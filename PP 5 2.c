#include<stdio.h>
void main()
{
    int a,b,i,c=0;
    char p='*';
    for(i=0;i<3;i++)
    {
    for(a=0;a<8;a++)
    {
    printf("%d",c);
    }
        for(b=0;b<12;b++)
        {
        printf("%c",p);
        }
        printf("\n");

    }
    for(i=0;i<4;i++)
        {
            for(a=0;a<20;a++)
            {
                printf("%c",p);
            }
        printf("\n");
        }
    for(i=0;i<3;i++)
    {
        for(b=0;b<15;b++)
        {
        printf("%c",p);
        }
        for(a=0;a<5;a++)
        {
        printf("%d",c);
        }
        printf("\n");

    }

}
