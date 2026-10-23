//Program to calculate household electricity bill
#include<stdio.h>
void main()
{
int u;
float total;
printf("Enter number of units consumed");
scanf("%d",&u);
if(u<=100)
total=1.50*u;
else if(u>101&&u<=200)
total=2.50*u;
else if(u>201&&u<=500)
total=4.00*u;
else
total=6.00*u;
printf("The total bill amount is %.2f",total);
}
