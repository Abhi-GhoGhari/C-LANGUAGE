#include<stdio.h>
#include<conio.h>

main()
{
	int i,A;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(A=1;A<=5;A++)
		{
			printf("%i ",A);
		}
		printf("\n");
	}
	getch();
}