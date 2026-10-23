//Program to find distance travelled by an object
#include<stdio.h>
void main()
{
    float speed,distance,time;
    printf("Enter speed travelled by the object");
    scanf("%f",&speed);
    printf("Enter time taken by the object");
    scanf("%f",&time);
    distance=speed*time;
    printf("The distance covered by the object is %f",distance);
}
