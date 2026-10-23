//Program to find average of three numbers
#include<stdio.h>
void main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("The result is %.2f",avg);
}
