#include <stdio.h>

void ptr(int size)
{

    int arr[size][size];
    int *ptr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int A = 0; A < size; A++)
        {
            ptr[i][A] = &arr[i][A];
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int A = 0; A < size; A++)
        {
            printf("Enter Arr[%i][%i] = ", i, A);
            scanf("%i", &*ptr[i][A]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int A = 0; A < size; A++)
        {
            printf("%i ", (*ptr[i][A]) * (*ptr[i][A]) * (*ptr[i][A]));
            printf("\n");
        }
    }
}

int main()
{
    int size;
    printf("ENTER SIZE OF ARRAY =");
    scanf("%i", &size);

    ptr(size);
}