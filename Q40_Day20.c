// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>
int main() {
    char bin[100];
    scanf("%s", bin);
    for (int i = 0; i < strlen(bin); i++) {
        if (bin[i] == '0')
            printf("1");
        else
            printf("0");
    }
    return 0;
}