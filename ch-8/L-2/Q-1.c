#include<stdio.h>

int main()
{
    int A;
    printf("ENTER ARRAY A SIZE= ");
    scanf("%i",&A);
    printf("\n ARRAY A ELEMENT=======\n");

    int a[A];
    for (int i = 0; i < A; i++)
    {
      printf("\nA[%i]= ",i);
      scanf("%i",&a[i]);
    }

    int B;
    printf("ENTER ARRAY B SIZE= ");
    scanf("%i",&B);
    printf("\n ARRAY B ELEMENT=======\n");

    int b[B];
    for (int i = 0; i < B; i++)
    {
      printf("\nA[%i]= ",i);
      scanf("%i",&b[i]);
    }

    int c[A+B];
    for (int i = 0; i < A; i++)
    {
        c[i]=a[i];
    }
    for (int i = 0; i < B; i++)
    {
        c[i+A]=b[i];
    }
    
    printf("\n========MEREGE THIS ARRAY==========\n");
    for (int i = 0; i < A+B; i++)
    {
        printf("%i ",c[i]);
    }
    
} 