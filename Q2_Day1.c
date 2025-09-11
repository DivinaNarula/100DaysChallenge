// Write a program to input two numbers and display their sum, difference, product and quotient */'
#include<stdio.h>
int main()
{
    int a,b,s,d,p,q;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;
    printf("Sum of %d and %d is %d\n",a,b,s);
    printf("Difference of %d and %d is %d\n",a,b,d);
    printf("Product of %d and %d is %d\n",a,b,p);
    printf("Quotient of %d and %d is %d\n",a,b,q);
}