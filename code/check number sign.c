#include <stdio.h>

int main()
{
    int x;
    
    printf("enter number 1 :");
    scanf("%d",&x);
    
    
    if (x>0){
        printf("the number is positive");
    }
    else if(x<0){
        printf("the number is negative");
    }
    else if (x==0) {
        printf("the number is zero");
    }
    else {
        printf("number is not valid");
    }
}