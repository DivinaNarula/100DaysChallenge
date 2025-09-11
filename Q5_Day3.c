// Write a program to convert temperature from celcius to fahrenheit.
#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in celcius:");
    scanf("%d", &c);
    f=(c*9.0/5.0)+32;
    printf("Temperature in fahrenheit is %d", f);
    return 0;
}