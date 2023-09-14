#include<stdio.h>
#include<conio.h>

main()
{
	float le,ba,AC;
	clrscr();
	printf("ENTER LENTH= ");
	scanf("%f",&le);
	printf("ENTER BASE= ");
	scanf("%f",&ba);


	AC=0.5*le*ba;
	printf("AREA OF TRAINGLE %.2f",AC);
	getch();
}