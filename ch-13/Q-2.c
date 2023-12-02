#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("demo.txt", "w");

    fopen("ptr", "Number : ");
    printf("Number : ");
    for (int A = 1; A < 50; A++)
    {
        if (A % 3 == 0 || A % 5 == 0)
        {
            fprintf(ptr, "%i ", A);
            printf("%i ", A);
        }
    }
}