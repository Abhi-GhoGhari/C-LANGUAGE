#include <stdio.h>
int main()
{
    int R,C,R1,C1,R_sum=0,C_sum=0;
    printf("ENTER ROW SIZE= ");
    scanf("%i",&R);
    printf("ENTER COLUMN SIZE= ");
    scanf("%i",&C);

    int i,A,a[R][C];
    printf("\n=======ARRAY A======\n");

    for (int i = 0; i < R; i++)
    {
        for (int A = 0; A < C; A++)
        {
            printf("ENTER A[%i][%i]= ",i,A);
            scanf("%i",&a[i][A]);
        }
    }

    printf("ENTER NUMBER OF ROW\t= ");
    scanf("%i",&R1);
    printf("ELEMENT OF ROW%i\t= ",R1);

    for (int A = 0; A < C; A++)
    {
        printf("%i",a[R1-1][A]);
        R_sum+=a[R1-1][A];
    }
    printf("\nTHE SUM OF ROW%i\t= %i",R1,R_sum);
    printf("\n\n======================\n");
    printf("\nENTER NUMBER OF COLUMN\t= ");
    scanf("%i",&C1);
    printf("ELEMENT OF ROW %i\t= ",C1);
     for (int A = 0; A < C; A++)
    {
        printf("%i",a[C1-1][A]);
        C_sum+=a[C1-1][A];
    }
    printf("\nTHE SUM OF COLUMN %i\t= %i",C1,C_sum);
}