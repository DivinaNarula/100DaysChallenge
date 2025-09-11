// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
int main()
{
    float p, r, t, sp, cp;
    printf("Enter the value of principal:");
    scanf("%d", &p);
    printf("Enter the value of rates");
    scanf("%d", r);
    printf("Enter the value of time:");
    scanf("%d", t);
    sp=(p*r*t)/100;
    cp=p*pow((1+r/100),t)-p;
    printf("simple interest=%d, compound interest=%d", sp, cp);
}