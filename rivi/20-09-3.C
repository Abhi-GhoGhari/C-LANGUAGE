#include<stdio.h>
#include<conio.h>
main()
{
	int A=1,n;
	clrscr();
	printf("!! ENTER ANY NUMBER !!");
	scanf("%i",&n);

	do
	{
		printf("%i * %i = %i\t",n,A,n*A);
		A++;
	}
	while(A<=10)
	getch();
}