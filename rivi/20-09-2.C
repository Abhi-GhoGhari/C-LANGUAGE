#include<stdio.h>
#include<conio.h>
main()
{
	int A=10;
	clrscr();

	do
	{
		printf("%i\t",A--);
	}
	while(A<=1)
	getch();
}