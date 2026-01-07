#include <stdio.h>

int main()
{
    int a[5], n, i;
    float sum = 0, avg;

   printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = sum / n;

    printf("Average = %.2f", avg);

    return 0;
}
