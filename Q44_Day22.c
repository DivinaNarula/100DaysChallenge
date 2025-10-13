// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1) / (double)(2 * i);
    }
    printf("Approximate sum: %.1lf", sum);
    return 0;
}