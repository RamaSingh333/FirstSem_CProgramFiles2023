//C program to find diameter, circumference and area of a circle using functions.
#include<stdio.h>
#include<math.h>

#define PI 3.14

double find_Diameter(double radius);
double find_Circumference(double radius);
double find_Area(double radius);

int main()
{
  float radius, area, circumference, diameter;

  printf("\n Please Enter the radius of a circle : ");
  scanf("%f",&radius);

  diameter = find_Diameter(radius);
  circumference = find_Circumference(radius);
  area = find_Area(radius);

  printf("\n Diameter Of a Circle = %.2f\n", diameter);
  printf(" Circumference Of a Circle = %.2f\n", circumference);
  printf(" Area Of a Circle = %.2f\n", area);

  return 0;
}

double find_Diameter(double radius)
{
   return 2 * radius;
}

double find_Circumference(double radius)
{
   return 2* PI * radius;
}
double find_Area(double radius)
{
   return PI * radius * radius;
}
