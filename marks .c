#include <stdio.h>

int main()
{
    int marks[5];
    int i, total = 0;
    float average;
    printf("Enter marks for 5 subjects:\n");
    for(i=0; i<5; i++);
    {
        printf("subjects %d:",i+1);
        scanf("%d",&marks[i]);
        total += marks[i];
    }
    average = (float)total/5;
    printf("total marks: %d\n",total);
    printf("average marks: %.2f/n",average);
    return 0;
    
    }
