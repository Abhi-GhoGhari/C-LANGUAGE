#include<stdio.h>
#include<conio.h>

main()
{
	int i,A;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(A=i;A<=5;A++)
		{
			printf("%i ",i);
		}
		printf("\n");
	}
	getch();
}