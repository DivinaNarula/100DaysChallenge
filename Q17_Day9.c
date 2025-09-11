// Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main() 
{
    float a, b, c;
    float d, r1, r2, rp, ip;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a==0) 
    {
        printf("This is not a quadratic equation\n");
        return 0;
    }
    d=b*b-4*a*c;
    if (d>0) 
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and distinct\n");
        printf("Root 1=%f\n", r1);
        printf("Root 2=%f\n", r2);
    } 
    else if (d==0) 
    {
        r1=-b/(2*a);
        printf("Roots are real and equal\n");
        printf("Root = %f\n", r1);
    } 
    else 
    {
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        printf("Roots are complex and imaginary\n");
        printf("Root 1 = %f+%f\n", rp, ip);
        printf("Root 2 = %f-%f\n", rp, ip);
    }
    return 0;
}