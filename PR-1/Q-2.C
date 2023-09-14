#include<stdio.h>
#include<conio.h>

main()
{
	int B;
	float HA,DA,TA,G;
	clrscr();
	printf("BASE SALARY= ");
	scanf("%i",&B);

	H =B*0.10;
	DA=B*0.05;
	TA=B*0.08;

	printf("HRA = %.2f\n",H);
	printf("DA = %.2f\n",DA);
	printf("TA = %.2f\n",TA);

	G=B+HA+DA+TA;

	printf("GROSS SALARY %.2f\n ",G);
	getch();
}