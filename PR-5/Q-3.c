#include <stdio.h>
int main()
{
    int R,C;
    printf("ENTER ROW= ");
    scanf("%i",&R);
    printf("ENTER COLUMN= ");
    scanf("%i",&C);

    int a[R][C];

    for (int i = 0; i < R; i++)
    {
        for (int A = 0; A < C; A++)
        {
            printf("ENTER ARRAY[%i][%i]= ",i,A);
            scanf("%i",&a[i][A]);
        }
    }

    printf("\n======MATRIX======\n");

    for (int i = 0; i < R; i++)
    {
        for (int A = 0; A < C; A++)
        {
            printf("%i ",a[i][A]);
        }
        printf("\n");
    }

    printf("\n======TRANSPOSE MATRIX======\n");

    for (int i = 0; i < R; i++)
    {
        for (int A = 0; A < C; A++)
        {
            printf("%i ",a[A][i]);
        }
        printf("\n");
    }
}