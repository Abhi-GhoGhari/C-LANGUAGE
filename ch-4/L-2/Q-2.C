#include<stdio.h>
#include<conio.h>

main()
{
	int A,B;
	clrscr();
	printf("ENTER A & B= ");
	scanf("%i%i",&A,&B);

	A=A+B;
	B=A-B;
	A=A-B;

	printf("SWAPING OF A= %i\n",A);
	printf("SWAPING OF B= %i\n",B);
	getch();
}