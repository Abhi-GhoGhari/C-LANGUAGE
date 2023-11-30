#include <stdio.h>

int find(char str[], char *ptr)
{
    int lenth = 0;

    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
        lenth++;
    }
    return lenth;
}

int main()
{
    char str[20];

    printf("ENTER ANY MASSEGE= ");
    scanf("%[^\n]", &str);

    printf("\n\n!!THE SIZE OF YOUR MASSEGE>>>>= ||%i||", find(str, &str[0]));
}
