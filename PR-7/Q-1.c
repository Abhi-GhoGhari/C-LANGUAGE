#include <stdio.h>

void statement()
{
    printf("PRESS 1 FOR [+]\n");
    printf("PRESS 2 FOR [-]\n");
    printf("PRESS 3 FOR [*]\n");
    printf("PRESS 4 FOR [/]\n");
    printf("PRESS 5 FOR [%%]\n");
    printf("!!PRESS 0 FOR EXIT!!\n");
}

void sum(int a, int b)
{
    printf("\nSUM= %i\n", a + b);
}

void sub(int a, int b)
{
    printf("\nSUB= %i\n", a - b);
}

void mult(int a, int b)
{
    printf("\nMULT= %i\n", a * b);
}

void div(int a, int b)
{
    printf("\nDIV= %i\n", a / b);
}

void mod(int a, int b)
{
    printf("\nMOD= %i\n", a % b);
}

int main()
{
    int A, B, choice;

    printf("ENTER 1st VALUE= ");
    scanf("%i", &A);
    printf("ENTER 2nd VALUE= ");
    scanf("%i", &B);

    do
    {
        statement();
        scanf("%i", &choice);

        switch (choice)
        {
        case 1:
            sum(A, B);
            break;
        case 2:
            sub(A, B);
            break;
        case 3:
            mult(A, B);
            break;
        case 4:
            div(A, B);
            break;
        case 5:
            mod(A, B);
            break;
        case 0:
            printf("EXIT !!");
            break;
        default:
            printf("UNKNOW INPUT !!");
        }

    } while (choice != 0);
}