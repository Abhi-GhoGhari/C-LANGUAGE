#include<stdio.h>
#include<conio.h>

main()
{
	int P,Q,R;
	clrscr();
	printf("ENTER P=");
	scanf("%i",&P);
	printf("ENTER Q=");
	scanf("%i",&Q);
	printf("ENTER R=");
	scanf("%i",&R);
	if(P<Q)
	{
		if(P<R)
		{
			printf("!! P IS SMALL !!");
		}
		else
		{
			printf("!! R IS SMALL !!");
		}
	}
	else
	{
		if(Q<R)
		{
			printf("!! Q IS SMALL !!");
		}
		else
		{
			printf("!! R IS SMALL !!");
		}
	}
	getch();
}