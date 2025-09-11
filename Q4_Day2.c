// Write a program to calculate the area and circumference of a circle given its radius. */
#include<stdio.h>
int main()
{
    int r,a,c;
    printf("Enter radius of the circle:");
    scanf("%d",&r);
    a=3.14*(r*r);
    c=2*3.14*r;
    printf("Area of circle of radius %d is %d\n",r,a);
    printf("Circumference of circle of radius %d is %d\n",r,c);
}