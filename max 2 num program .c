#include <stdio.h>

int main()
{
    int a;
    int b;
    int max;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    printf("the maximum number is:%d\n",max);

    return 0;
}
