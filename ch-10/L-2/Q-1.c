#include <stdio.h>

int IntInput()
{
    int n;
    scanf("%i", &n);
    return n;
}

void arrayIntput(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("ENTER ELEMENT a[%i] = ", i);
        scanf("%i", &array[i]);
    }
}

void arrayOutput(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("ARRAY[%i] = %i\n", i, array[i]);
    }
}

int sum(int array[], int size)
{
    printf("\n-----:ARRAY INPUT:-----\n\n");
    arrayIntput(array, size);

    printf("\n\n----:ARRAY OUTPUT:-----\n\n");
    arrayOutput(array, size);

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum;
}

int main()
{
    int size;

    printf("ENTER SIZE OF AN ARRAY= ");
    size = IntInput();

    int array[size];

    int Sum = sum(array, size);

    printf("\n\nSUM OF ARRAY %i", Sum);
}