#include<stdio.h>
#include<conio.h>

main()
{
	int i,A;
	clrscr();
	for(i=65;i<=69;i++)
	{
		for(A=i;A>=65;A--)
		{
			printf("%c ",A);
		}
		printf("\n");
	}
	getch();
}