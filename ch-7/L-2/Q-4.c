#include<stdio.h>

main()
{
	int i,A,S;
	for(i=1;i<=5;i++)
	{
		for(S=1;S<i;S++)
		{
			printf(" ");
		}
		for(A=i;A<=5;A++)
		{
	    
			(A%2==0)
					?printf("0")
					:printf("1");
		}
		printf("\n");
	}
}
