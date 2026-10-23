//Program to perform multiplication and division of two numbers
#include<stdio.h>
void main()
{
    int a,b,pro;
    float quo;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    pro=a*b;
    quo=a/b;
    printf("The result is %d",pro);
    printf("\nThe result is %.2f",quo);
}
