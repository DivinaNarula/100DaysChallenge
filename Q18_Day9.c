// Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main() 
{
    float p;
    printf("Enter your percentage: ");
    scanf("%f", &p);
    if (p<0 || p>100) 
    {
        printf("Invalid percentage. Please enter a value between 0 and 100\n");
    } 
    else 
    {
        if (p>=90) 
        {
            printf("Grade: A+\n");
        } 
        else if (p>=80) 
        {
            printf("Grade: A\n");
        } 
        else if (p>=70) 
        {
            printf("Grade: B\n");
        } 
        else if (p>=60) 
        {
            printf("Grade: C\n");
        } 
        else if (p>=50) 
        {
            printf("Grade: D\n");
        } 
        else if (p>=40) 
        {
            printf("Grade: E\n");
        } 
        else 
        {
            printf("Grade: F (Fail)\n");
        }
    }
    return 0;
}