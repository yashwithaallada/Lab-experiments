//Program to simulate a calculator 
#include<stdio.h>
void main()
{
int a,b,sum,diff,pro,div,choice;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("Enter your choice(1 for addition, 2 for subtraction, 3 for multiplication, 4 for division):");
scanf("%d",&choice);
switch(choice)
{
case 1:
sum=a+b;
printf("The Sum is %d",sum);
break;
case 2:
diff=a-b;
printf("The difference is %d",diff);
break;
case 3:
pro=a*b;
printf("The product is %d",pro);
break;
case 4:
if(b==0)
printf("Division by zero is not possible");
else
div=a/b;
printf("The quotient is %d",div);
break;
default:
printf("Invalid option");
}
}
