#include<stdio.h>
main()
{
  float length;
  float breadth;
  float area;

  printf("Enter length of rectangle: ");
  scanf("%f", &length);  
  printf("Enter breadth of rectangle: ");
  scanf("%f", &breadth);

  area =length * breadth;

  printf("The area of the rectangle is %f", area);

}