#include<stdio.h>
#include<conio.h>

main()
{
	float wi,le,AC;
	clrscr();
	printf("ENTER LENTH= ");
	scanf("%f",&le);
	printf("ENTER WITH= ");
	scanf("%f",&wi);


	AC=le*wi;
	printf("AREA OF RECTENGLE %.2f",AC);
	getch();
}