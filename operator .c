#include <stdio.h>

int main()
{
char operator;
    double num1,num2,result;
    printf("Enter an operator (+, -, *, /)");
    scanf("%c",&operator);
    printf("Enter two operator:");
    scanf("%lf %lf",&num1,&num2);
    switch(operator)
    {
        case '+':
        result = num1 + num2;
        printf("result: %.10lf\n",result);
        break;
        case '-':
        result = num1 - num2;
        printf("result:%.2lf\n",result);
        break;
        case '*':
        result = num1 * num2;
        printf("result:%.2lf\n",result);
        break;
        case '/':
        if (num2 !=0)
        result = num1 / num2;
        else
        {
            printf("Error: division by zero is not allowed.\n");
            return 1;
        }
        printf("result: %.2lf\n",result);
        break;
        defalut:
        printf("Error:invalid operator.\n");
    

    }
    return 0;
}
