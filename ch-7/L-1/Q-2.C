#include<stdio.h>
#include<conio.h>

main()
{
	int i,A;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(A=i;A<=5;A++)
		{
			printf("%i ",A);
		}
		printf("\n");
	}
	getch();
}