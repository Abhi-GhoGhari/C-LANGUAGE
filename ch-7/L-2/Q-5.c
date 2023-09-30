#include<stdio.h>
main()
{
	int A,i,S;
	for(i=5;i>=1;i--)
	{
		for(S=5;S>i;S--)
		{
			printf(" ");
		}
		for(A=i;A>=1;A--)
		{
			printf("%i",A);
		}
		printf("\n");
	}
}
