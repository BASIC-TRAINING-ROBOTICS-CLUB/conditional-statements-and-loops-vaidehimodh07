#include <stdio.h>

int main() 
{
    int num, digit;
    int sum = 0;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        count++;
        num /= 10;
    }

    printf("The number of digits is: %d\n", count);
    printf("The sum of the digits is: %d\n", sum);
}