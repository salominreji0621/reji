#include <stdio.h>

int main()
{
    int num,i,isprimre=1;
    printf("Enter an integer:");
    scanf("%d",&num);
    if(num <=1)
    {
        isprimre =0;
    }
    else {
        for(i=2; i*i<=num; i++)
        {
            if(num % i == 0)
            {
                isprimre=0;
                break;
            }
        }
    }
    if(isprimre)
    printf("%d is a prime number.\n",num);
    else
    printf("%d is not a prime number.\n",num);
    return 0;
}

