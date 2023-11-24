#include <stdio.h>
int main()
{
    int P, Q;
    printf("ENTER P=");
    scanf("%i", &P);
    printf("ENTER Q=");
    scanf("%i", &Q);

    int *ptr0, *ptr1;

    ptr0 = &P;
    ptr1 = &Q;

    *ptr1 = *ptr0 * *ptr1;
    *ptr0 = *ptr1 / *ptr0;
    *ptr1 = *ptr1 / *ptr0;

    printf("VALUE OF P=%i\n", *ptr0);
    printf("VALUE OF Q=%i\n", *ptr1);
}