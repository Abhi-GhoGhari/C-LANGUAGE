#include <stdio.h>
int main()
{
    char string1[20], string2[20];
    printf("ENTER ANY STRING= ");
    scanf("%[^\n]", &string1);

    int len = 0, count = 0;

    for (int i = 0; string1 != '\0'; i++)
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        string2[len - (i + 1)] = string1[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (string1[i] == string2[i])
        {
            count++;
        }
    }
    len == count
        ? printf("GIVEN STRING IS PELIDROME!!")
        : printf("GIVEN STRING IS NOT PELIDROME!!");
}