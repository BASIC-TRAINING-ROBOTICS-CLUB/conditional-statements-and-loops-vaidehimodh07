#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a number1: ");
    scanf("%d", &a);
    
    printf("Enter a number2: ");
    scanf("%d", &b);
    
    printf("Enter a number3: ");
    scanf("%d", &c);
    
    if (a>b && a>c)
    {
        printf("The 1 number is greater");
    }
    else if (b>a && b>c)
    {
        printf("The 2 number is greater");
    }
    else if (c>a && c>b)
    {
        printf("The 3 number is greater");
    }
    else
    {
        printf("two or more number are equal");
    }
}