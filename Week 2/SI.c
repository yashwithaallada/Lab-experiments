//Program to calculate simple interest
#include<stdio.h>
void main()
{
    int p,t,r;
    float si;
    printf("Enter principal amount");
    scanf("%d",&p);
    printf("Enter time period");
    scanf("%d",&t);
    printf("Enter rate of interest");
    scanf("%d",&r);
    si=(p*r*t)/100;
    printf("Simple interest:%.2f",si);
}
    
