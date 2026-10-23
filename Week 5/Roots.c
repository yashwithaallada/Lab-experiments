//Program to find the roots of quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float r1,r2;
printf("Enter the values of coefficients of x^2 and x");
scanf("%d%d",&a,&b);
printf("Enter the value of constant term");
scanf("%d",&c);
r1=(-b+sqrt(b*b-4*a*c))/2*a;
r2=(-b-sqrt(b*b-4*a*c))/2*a;
printf("The roots of the quadratic equation are %.2f and %.2f",r1,r2);
}
