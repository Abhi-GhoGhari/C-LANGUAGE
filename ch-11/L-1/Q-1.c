#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i <= 5; i++)
    {
        printf("ENTER ARRAY[%i] = ", i);
        scanf("%i", &a[i]);
    }

    int *ptr;

    for (int i = 0; i < 5; i++)
    {
        ptr = &a[i];
        printf("ARRAY[%i] = %i\n", i, (*ptr) * (*ptr));
    }
}