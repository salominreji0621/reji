#include <stdio.h>

int main()
{
    int l;
    int b;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    int area = 1 * b;
    int peri = 2* (1+b);
    printf("area = %d, perimeter = %d",area,peri);
    return 0;
}
