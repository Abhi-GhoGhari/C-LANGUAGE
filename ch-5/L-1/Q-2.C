#include<stdio.h>
#include<conio.h>

main()
{

	int n;
	clrscr();
	printf("ENTER ANY NUMBER= ");
	scanf("%i%i",&n);

	if(n>0)
	{
		printf("!! IT'S POSITIVE NUMBER !!");
	}
	else if(n==0)
	{
		printf("!! IT'S NUTREL NUMBER !!");
	}
	else
	{
		printf("!! IT'S NAGETIVE NUMBER !!");
	}
	getch();

}