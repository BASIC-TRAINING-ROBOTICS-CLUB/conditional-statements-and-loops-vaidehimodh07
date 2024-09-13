#include <stdio.h>

int add(int a,int b){
    return (a+b);
}
int sub(int a,int b){
    return (a-b);
}
int mul(int a,int b){
    return (a*b);
}
int dv(int a,int b){
    return (a/b);
}

int main()
{   
    printf("addition %d\n",add(10,5));
    printf("subtraction %d\n",sub(10,5));
    printf("multiplication %d\n",mul(10,5));
    printf("division %d\n",dv(10,5));   
}