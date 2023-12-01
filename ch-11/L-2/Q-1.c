#include <stdio.h>

int main()
{
    int size;
    printf("ENTER SIZE OF ARRAY= \n\n");
    scanf("%i", &size);

    int arr[size], *ptr[size], **Ch[size];
    for (int i = 0; i < size; i++)
    {
        printf("ENTE VALUE OF ARRAY= ");
        scanf("%i", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        ptr[i] = &arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        Ch[i] = &ptr[size - i];
    }

    printf("\n\nREVERD ARRAY ELEMENT= ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", **Ch[i]);
    }
}