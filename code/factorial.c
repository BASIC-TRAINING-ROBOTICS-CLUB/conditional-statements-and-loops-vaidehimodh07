#include <stdio.h>

int main() 
{
    int n;
    int a = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("factorial : ");
    if (n<0){
        printf("number you have entered is negative");
    }

    else {
        for (int i = 1; i <= n; i++)
        a *= i;
    }
    printf("%d",a);
}