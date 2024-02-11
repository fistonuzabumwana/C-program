#include<stdio.h>
main()
{
    int a,b,c;

    printf("enter a 2 numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    printf("%d + %d = %d\n",a,b,c);
    c=a-b;
    printf("%d - %d = %d\n",a,b,c);
    c=a*b;
    printf("%d x %d = %d\n",a,b,c);
    c=a/b;
    printf("%d / %d = %d",a,b,c);

}
