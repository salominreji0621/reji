#include <stdio.h>

int main()
{
    int a=30;
    int b=20;
    int c=10;
    if(a>b && a>c){
    printf("A is greater");
    }else 
    if(b>a && b>c){
        printf("B is greater");
    }else{
        printf("C is greater");
    }
        return 0;
    }
