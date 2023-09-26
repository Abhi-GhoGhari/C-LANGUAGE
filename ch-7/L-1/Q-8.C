#include<stdio.h>
#include<conio.h>

main()
{
	int i,A,G=1;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(A=i;A>=1;A--)
		{
			printf("%i ",G++);
		}
		printf("\n");
	}
	getch();
}