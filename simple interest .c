#include <stdio.h>

int main()
{
    int amount = 100;
    int per = 10;
    int interest = amount +(amount * per / 100);
    printf("%d",interest);
    
    return 0;
}
