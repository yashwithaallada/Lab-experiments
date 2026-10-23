#include<stdio.h>
void main()
{
    float t1,t2,f,c;
    printf("Enter temperature in degree celsius");
    scanf("%f",&t1);
    f=(t1*9/5)+32;
    printf("%.2f",f);
    printf("\nEnter temperature in degree farenheit");
    scanf("%f",&t2);
    c=(t2-32)*5/9;
    printf("%.2f",c);
}
    
        
    
