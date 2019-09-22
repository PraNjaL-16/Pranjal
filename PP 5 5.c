#include<stdio.h>
void main()
{
    int i,x,y,m,c=0,a=0;
    char p='*';

    for(i=0;i<3;i++)
    {
        for(x=0;x<20;x++)
        {
            printf("%c",p);
        }
        printf("\n");

        if(c<2)
        {   for(y=0;y<4;y++)
            {   printf("%c",p);
                    for(m=0;m<4;m++)
                    {
                        printf("%d",a);
                    }
            }
            printf("\n");
            c++;
        }
    }
}
