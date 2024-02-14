#include<stdio.h>
main()
{
  float radius, circ, area, diameter, pi= 3.14159;

  printf("Enter radius of circle: ");
  scanf("%f", &radius);  
  

  area = radius * radius * pi;
  circ = 2 * pi * radius;
  diameter = radius * 2;

  printf("The area of the rectangle is %f \n", area);
  printf("The circumference of the rectangle is %f \n", circ);
  printf("The diameter of the rectangle is %f \n", diameter);

}