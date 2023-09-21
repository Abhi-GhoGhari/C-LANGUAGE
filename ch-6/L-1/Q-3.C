#include<stdio.h>
#include<conio.h>

main()
{
	int A=1,n;
	clrscr();
	printf("ENTER ANY YOUR WISH NUMBER= ");
	scanf("%i",&n);
	while(A<=n)
	{
		printf("%i\t",A);
		A++;
	}
	getch();
}