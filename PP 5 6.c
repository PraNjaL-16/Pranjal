#include<stdio.h>
void main()
{
    int i,x,y,a=0;
    char p='*';

    for(i=0;i<2;i++)
    {
        for(x=0;x<4;x++)
        {
            printf("%d",a);
                for(y=0;y<4;y++)
                {
                    printf("%c",p);
                }
        }
        printf("\n");

          for(x=0;x<4;x++)
        {
            printf("%c",p);
                for(y=0;y<4;y++)
                {
                    printf("%d",a);
                }
        }
        printf("\n");
    }
}
