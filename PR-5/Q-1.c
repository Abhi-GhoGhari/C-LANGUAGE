#include<stdio.h>
int main()
{
    int size;

    printf("ENTER SIZE= ");
    scanf("%i",&size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("ENTER ARRAY[%i] : ",i);
        scanf("%i",&a[i]);
    }

    printf("NEGETIVE ELEMENT OF THIS ARRAY= ");
    for (int i = 0; i < size; i++)
    {
        if (a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
}
