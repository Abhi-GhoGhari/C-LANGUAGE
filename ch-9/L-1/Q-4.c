#include <stdio.h>
int main()
{
    char a[50];
    printf("ENTER ANY SENTENSE= ");
    scanf("%[^\n]",&a);

    if (a[0] >= 97 && a[0] <= 122)
        a[0] - 32;

    for (int i = 1; i < 50; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
            a[i] += 32;
    }
    printf("\n\n----:TITLE CASE:----\n\n");
    printf("%s",a);
}