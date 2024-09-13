#include <stdio.h>

int main()
{   
    int array[] = {1,2,3,4,5};
    for (int i = 0 ; i<5; i++){
        if (array[i]%2==0){ 
            printf("number is even %d\n",array[i]);
        }else { 
            printf("number is odd %d\n",array[i]);
        }
    }
}