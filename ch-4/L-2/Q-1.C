#include<stdio.h>
#include<conio.h>

main()
{
	int A,B,C;
	clrscr();
	printf("ENTER A AND B=");
	scanf("%i%i",&A,&B);

	C=A;
	A=B;
	B=C;
	printf("SWAPING A = %i\n",A);
	printf("SWAPING B = %i\n",B);
	getch();
}