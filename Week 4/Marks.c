//Program to evaluate total and average of marks
#include <stdio.h>
void main()
{
int m1,m2,m3,m4,m5;
float total,avg;
printf("Enter marks obtained in 5 subjects");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/5;
printf("The total marks obtained is %.2f",total);
printf("\nAverage is %.2f",avg);
}
