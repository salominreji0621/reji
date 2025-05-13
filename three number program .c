#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int max;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b+c)?a:b/c;
    printf("the maximun number is: %d\n",max);
    return 0;
}
