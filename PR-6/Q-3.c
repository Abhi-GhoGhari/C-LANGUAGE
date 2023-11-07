#include<stdio.h>
int main()  
{
    char string1, string2;
    int len1 = 0, len2 = 0, com = 0,i;

    printf("ENTER FIRST STRING= ");
    scanf("%[^\n]", &string1);
    printf("ENTER SECOND STRING= ");
    scanf("%[^\n]", &string2);

    for (i = 0; string1 != '\0'; i++)
        len1++;
    for (i = 0; string2 != '\0'; i++)
        len2++;

    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            if (string1 == string2)
                com++;
        }

        (len1 == com)
            ? printf("GIVEN STRING IS SAME!!")
            : printf("GIVEN STRING IS NOT SAME !!");
    }
    else
        printf("GIVEN STRING IS NOT SAME !!");
}