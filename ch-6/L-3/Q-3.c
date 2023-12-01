#include<stdio.h>

int main()
{
    int i = 1, n;

    printf("ENTER NUMBER OF TABLE=");
    scanf("%i",&n);

    do
    {
    	printf("%i * %i = %i\n", n, i++, n * i);
	}
    while (i <= 10);
}
