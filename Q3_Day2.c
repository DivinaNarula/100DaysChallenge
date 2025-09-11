// Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */
#include<stdio.h>
int main()
{
    int l,b,p,a;
    printf("Enter length of rectangle:");
    printf("Enter breadth of rectangle:");
    scanf("%d %d",&l,&b);
    p=2*(l+b);
    a=l*b;
    printf("Perimeter of rectangle of length %d and breadth %d is %d\n",l,b,p);
    printf("Area of rectangle of length %d and breadth %d is %d\n",l,b,a);
}