//Program to calculate area of a triangle
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,area;
    printf("Enter the lengths of the sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %.2f",area);
}
