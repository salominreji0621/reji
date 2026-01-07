#include <stdio.h> 
int main()
{
    char s[100];
    int lower = 0, upper = 0, digit = 0, special = 0;
    int i;
    scanf("%[^\n]", s);
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("Lowercase = %d\n", lower);
    printf("Uppercase = %d\n", upper);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", special);
    return 0;
}
