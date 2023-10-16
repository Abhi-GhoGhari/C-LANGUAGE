#include <stdio.h>
int main()
{
    int R,C;
    printf("ENTER ROW= ");
    scanf("%i",&R);
    printf("ENTER COIUMN= ");
    scanf("%i",&C);

    int a[R][C],large=1;

    for (int i = 0; i < R; i++)
    {
        for (int A = 0; A < C; A++)
        {
            printf("ENETER ARRAY[%i][%i]= ",i,A);
            scanf("%i",&a[i][A]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int A = 0; A < C; A++)
        {
            if (a[i][A] > large)
            {
                large = a[i][A];
            }
        }
    }
    printf("\n\nLARGE NNUMBER OF ARRAY %i",large);
}