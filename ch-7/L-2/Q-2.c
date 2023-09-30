#include<stdio.h>
main()
{
	int A,i,S;
	for(i=5;i>=1;i--)
	{
		for(S=1;S<i;S++)
		{
			printf(" ");
		}
		for(A=i;A<=5;A++)
		{
			printf("%i",A);
		}
		printf("\n");
	}
}
