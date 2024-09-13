#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter no.");
    printf("enter no.");
    printf("enter no.");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if (a == b && b==c)
    {
        printf("triangle is equvilateral triangle ");
    }
    else
    {
        printf("triangle is not equvilateral triangle ");
    }
}