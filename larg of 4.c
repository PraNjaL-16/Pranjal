#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter 4 no.");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("largest is %d",a);
            }
            else
            {
                printf("largest is %d",d);
            }
        }
        else
        {
        if(c>d)
           {
               printf("largest is %d",c);
           }
           else
           {
               printf("largest is %d",d);
           }
        }
    }
    else
    {
     if(b>c)
     {
         if(b>d)
         {
             printf("largest is %d",b);
         }
         else
         {
             printf("largest is %d",d);
         }
     }
     else
     {
         if(c>d)
         {
             printf("largest is %d",c);
         }
         else
        {
            printf("largest is %d",d);
        }
     }
    }
}

