#include<stdio.h>

main()
{
	int i,A,S;
	for(i=5;i>=1;i--)
	{
		for(A=1;A<=i;A++)
		{
			printf("%i",A);
		}
		for(S=5;S>i;S--)
		{
			printf("  ");
		}
		for(A=i;A>=1;A--)
		{
			printf("%i",A);
		}
	printf("\n");
 	}
}
