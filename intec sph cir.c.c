#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,f,g,h,dis,dis1,dis2,rc,rs,Area;
printf("Let ax+by+cz+d be a Plane");
printf("Enter the values of a,b,c,d");
scanf("%f %f %f %f",&a,&b,&c,&d);
printf("Let x^2 + y^2 + z^2 +ex+fy+gz+h be the Sphere");
printf("Enter values of e,f,g,h");
scanf("%f %f %f %f",&e,&f,&g,&h);
rs=sqrt((pow((e/2),2) + pow((f/2),2) + pow((g/2),2) -h));
dis1=(a*(-e/2) + b*(-f/2) + c*(-g/2)+d);
dis2=sqrt(a*a+b*b+c*c);
dis=dis1/dis2;
rc=sqrt((rs*rs)-(dis*dis));
Area=rc*rc*3.14159265359;
printf("Center of sphere (%f,%f,%f)\n",-e/2,-f/2,-g/2);
printf("Distance between plane and center of sphere=%f\n",dis);
printf("Radius of sphere=%f\n",rs);
printf("Radius of Circle is=%f\n",rc);
printf("Area of Circle is=%f\n",Area);
}

