#include <stdio.h>

int main()
{
    int a = 4;
    int b;
    b = 6;
    int temp = a;
    a = b;
    b = temp;
    printf("%d", a);
    printf("%d", b);

    return 0;
}
