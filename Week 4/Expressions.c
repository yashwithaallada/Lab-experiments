//Program to evaluate expressions
#include <stdio.h>
void main()
{
int A,B,C,D,E,F,G,i,J,r1,r2,r3;
printf("Enter values of A,B,C,D,E,F,G,i");
scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&i);
r1=A+B*C+(D*E)+F*G;
r2=A/B*C-B+A*D/3;
r3=A+++B---A;
J=(i++)+(++i);
printf("\nThe result for the expression A+B*C+(D*E)+F*G is:%d",r1);
printf("\nThe result for the expression A/B*C-B+A*D/3 is:%d",r2);
printf("\nThe result for the expression A+++B---A is:%d",r3);
printf("\nThe result for the expression (i++)+(++i) is:%d",J);
}
