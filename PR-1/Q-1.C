#include<stdio.h>
#include<conio.h>

main()
{
	float C,F;
	clrscr();
	printf("ENTER C= ");
	scanf("%f",&C);

	printf("%.2f ",C*(9/5)+32);
	getch();
}