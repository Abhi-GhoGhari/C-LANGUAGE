#include<stdio.h>
main()
{
	int A,i,S;
	for(i=1;i<=5;i++)
	{
		for(S=1;S<i;S++)
		{
			printf(" ");
		}
		for(A=5;A>=i;A--)
		{
			printf("%i",A);
		}
		printf("\n");
	}
}
