#include<stdio.h>
#include<conio.h>

main()
{
	int A,B;
	clrscr();
	printf("ENTER A= ");
	scanf("%i",&A);
	printf("ENTER B= ");
	scanf("%i",&B);

	printf("ADITION        OF %i +  %i IS = %i\n",A,B,A+B);
	printf("SUBSTRICTION   OF %i -  %i IS = %i\n",A,B,A-B);
	printf("MULTIPLICATION OF %i *  %i IS = %i\n",A,B,A*B);
	printf("DIVISION       OF %i /  %i IS = %i\n",A,B,A/B);
	printf("MODULAS        OF %i %%  %i IS = %i\n",A,B,A%B);
	getch();
}