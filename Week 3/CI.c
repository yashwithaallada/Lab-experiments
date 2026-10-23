//Program to calculate compound interest
#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,n,ci;
    printf("Enter principal amount");
    scanf("%f",&p);
    printf("Enter rate of interest");
    scanf("%f",&r);
    printf("Enter time period");
    scanf("%f",&t);
    printf("Enter number of times interest applied per year");
    scanf("%f",&n);
    ci=p*pow((1+r/(100*n)),n*t);
    printf("Compound interest:%.2f",ci);
}
