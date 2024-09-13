#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    
    printf("enter number 1 :");
    scanf("%d",&x);
    
    printf("enter number 2 :");
    scanf("%d",&y);
    
    if (x>0 && y<0){
        printf("the number is in 4 quadrant");
    }
    
    else if (x>0 && y>0){
        printf("the number is in 1 quadrant");
    }
    
    else if (x<0 && y>0){
        printf("the number is in 2 quadrant");
    }
        
    else if (x<0 && y<0){
        printf("the number is in 3 quadrant");
    }

    else {
        printf("number is not valid");
    }
}