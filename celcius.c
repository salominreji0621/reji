#include <stdio.h>

int main()
{
    int c ;
    printf("Enter celcius:");
    scanf("%d",&c);
    int f = (c*9/5)+32;
    printf("f = %d",f);
    return 0;
}
