//Program to find maximum of three numbers
#include <stdio.h>
void main()
{
int a,b,c,max;
printf("Enter any three numbers");
scanf("%d%d%d",&a,&b,&c);
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("The greatest number is %d",max);
}
