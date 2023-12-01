#include<stdio.h>

int main()
{
    int n, sum = 0;
    printf("ENTER YOUR WISH TABLE= ");
    scanf("%i",&n);

    for(i=1;i<=n;i++)
    {
    	sum += i;
	}
    printf("THE SUM OF ALL NUMBERS= %i", sum);
}
