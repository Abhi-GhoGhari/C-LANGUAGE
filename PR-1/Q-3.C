#include<stdio.h>
#include<conio.h>

main()
{
	float P,Q,R;
	clrscr();
	printf("FIRST ANGLE= ");
	scanf("%i",&P);
	printf("SECOND ANGLE= ");
	scanf("%i",&Q);
	R=180-(P+Q);

	printf("THIRD ANGLE %.2f\n ",R);
	getch();
}