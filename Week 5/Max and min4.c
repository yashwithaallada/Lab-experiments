//Program to find maximum and minimum number
#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter any 4 numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
{
if(a>b&&a>c&&a>d)
printf("\nThe greatest number is %d",a);
else if(b>a&&b>c&&b>d)
printf("\nThe greatest number is %d",b);
else if(c>a&&c>d&&c>b)
printf("\nThe greatest number is %d",c);
else
printf("\nThe greatest number is %d",d);
}
{
if(a<b&&a<c&&a<d)
printf("\nThe smallest number is %d",a);
else if(b<c&&b<d&&b<a)
printf("\nThe smallest number is %d",b);
else if(c<b&&c<a&&c<d)
printf("\nThe smallest number is %d",c);
else
printf("\nThe smallest number is %d",d);
}
}
