#include<stdio.h>
#include<conio.h>

main()
{
	float pi=3.14,R,AC;
	clrscr();
	printf("ENTER R= ");
	scanf("%f",&R);

	AC=pi*R*R;
	printf("AREA OF CIRCAL %.2f",AC);
	getch();
}