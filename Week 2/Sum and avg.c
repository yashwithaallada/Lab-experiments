//Program to find sum and average of three numbers
#include<stdio.h>
void main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=sum/3;
    printf("The sum is %d",sum);
    printf("\nThe result is %.2f",avg);
}
