// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    if("a+b>c && a+c>b && b+c>a")
    {
        printf("The triangle is valid\n");
        if(a==b && b==c)
        {
            printf("The triangle is equilateral\n");

        }
        else if(a==b || b==c || a==c)
        {
            printf("The traimgle is isosceles\n");
        }
        else 
        {
            printf("The triamgle is scalene\n");
        }
    }
    else
    {
        printf("The triangle is not valid\n");
    }
}