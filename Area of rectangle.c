#include<stdio.h>
int main()
{
int radius;
float pi;
printf("enter the value of radius and pi\n");
scanf("%d%f",&radius,&pi);
printf("the area of circle is : %f\n",radius*radius*pi);
int height;
printf("enter the value of height\n");
scanf("%d",&height);
printf("the area of cylinder is : %f",pi*radius*radius*height);
return 0;
}
