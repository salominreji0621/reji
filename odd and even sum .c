#include <stdio.h>

int main()
{
    int n, i, num;
    int evensum = 0, oddsum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num % 2 == 0)
            evensum = evensum + num;
        else
            oddsum = oddsum + num;
    }

    printf("Even sum = %d\n", evensum);
    printf("Odd sum = %d\n", oddsum);

    return 0;
}
