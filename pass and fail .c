#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>=35)
    {
        printf("result:pass\n");
    }else{
        printf("result:fail\n");
    }
        return 0;
    }
