#include <stdio.h>

int main()
{
    int year ;
    
    printf("enter year to check year is leap year or not : ");
    scanf("%d",&year);
    
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("year is leap year");
    }
    else {
        printf("year is not leap year");
    }
}