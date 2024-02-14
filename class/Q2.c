#include<stdio.h>
main()
{
  float length;
  float breadth;
  float Perimeter;

  printf("Enter length of rectangle: ");
  scanf("%f", &length);  
  printf("Enter breadth of rectangle: ");
  scanf("%f", &breadth);

  Perimeter =(length + breadth ) * 2;

  printf("The perimeter of the rectangle is %f", Perimeter);

}