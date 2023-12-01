#include<stdio.h>

int main()
{
    int n, fact = 1;
    printf("ENTER NUMBER OF TABE= ");
    scanf("%i",&n);

    for ( i = 1; i <= n; i++)
    {
    	fact *= i;
	}
    printf("THE FACTORIAL IS= %i", fact);
}
