#include<stdio.h>
#include<conio.h>

main()
{

	char C;
	clrscr();
	printf("ENTER ANY ALPHABETS= ");
	scanf("%c",&C);

	if(C=='a'||C=='A'C=='e'||C=='E'C=='i'||C=='I'C=='o'||C=='O'C=='u'||C=='U')
	{
		printf("!! IT'S VOWEL !!");
	}
	else
	{
		printf("!! IT'S CONSOL !!");
	}
	getch();

}