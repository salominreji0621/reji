#include <stdio.h>
int main()
{
    int a[100], n, i, j;
    int isLeader;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Leaders in the array are:\n");
    for(i = 0; i < n; i++)
    {
        isLeader = 1;
        for(j = i + 1; j < n; j++)
        {
            if(a[i] <= a[j])
            {
                isLeader = 0;
                break;
            }
        }
        if(isLeader)
            printf("%d ", a[i]);
    }
    return 0;
}
