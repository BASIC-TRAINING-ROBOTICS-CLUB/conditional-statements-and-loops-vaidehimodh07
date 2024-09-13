#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int cal,cal2;
    
    printf("enter number 1 :");
    scanf("%d",&a);
    
    printf("enter number 2 :");
    scanf("%d",&b);
    
    printf("enter number 3 :");
    scanf("%d",&c);
    
    cal = a*a + b*b;
    cal2 = c*c;
    
    if (cal == cal2 ){
        printf("it is right angled triangle");
    }
    else {
        printf("it is not right angled triangle");
    }
}