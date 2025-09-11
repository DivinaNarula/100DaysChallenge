// Write a program to input two numbers and display their sum.*/
#include<stdio.h>
int main()
{
    int a,b,s;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    s=a+b;
    printf("Sum of %d, %d is %d\n",a,b,s);
}