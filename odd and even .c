#include <stdio.h>

int main()
{
    int num;
    printf("Enter number 1:");
    scanf("%d",&num);
    if(num % 2==0)
    printf("number 1 is even\n");
    else
    printf("number 1 is odd\n");
    printf("Enter number 2:");
    scanf("%d",&num);
    if(num % 2==0)
    printf("number 2 is even\n");
    else
    printf("number 2 is odd\n");

    return 0;
}
