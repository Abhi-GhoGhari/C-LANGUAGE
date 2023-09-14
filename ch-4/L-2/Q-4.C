#include<stdio.h>
#include<conio.h>

main()
{
	int A,B;
	clrscr();
	printf("ENTER TWO NUMBER ");
	scanf("%i%i",&A,&B);
	printf("(A+B)^2= %i",(A*A)+(2*A*B)+(B*B));

	getch();
}