#include <stdio.h>
int main()
{
    char str[50];
    printf("ENTER ANY STRING= ");
    scanf("%[^\n]", &str);

    int len = 0, count;
    for (int i = 0; str != '\0'; i++)
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        count = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        str[i] = NULL;
        printf("%s ===> %d", str[i], count);
    }
}