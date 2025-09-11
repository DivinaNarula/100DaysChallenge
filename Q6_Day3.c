// Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    a=b;
    b=c;
    printf("The value of a is %d and b is %d after swapping\n", a, b);
}