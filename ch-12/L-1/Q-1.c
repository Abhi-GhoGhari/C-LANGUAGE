#include<stdio.h>

struct student
{
	int  ID;
	char NAME[20];
	int  AGE;
	char COURSE[20];
	char CITY[20];
	int  STD;
	char SCHOOL[20];   
}


main()
{
	int A,i;
	printf("ENTER NUMBER OF STUDENT= ");
	scanf("%i",&A);
	
	struct student obj1[A];
	
	for(A=0;A<i;A++)
	{
		printf("ENTER YOUR STUDENT ID= ");	
		scanf("%i",&obj1[A].ID);
		printf("ENTER YOUR NAME= ");	
		scanf("%s",&obj1[A].NAME);
		printf("ENTER YOUR AGE= ");	
		scanf("%i",&obj1[A].AGE);
		printf("ENTER YOUR COURSE= ");	
		scanf("%s",&obj1[A].COURSE);
		printf("ENTER YOUR CITY= ");	
		scanf("%s",&obj1[A].CITY);
		printf("ENTER YOUR STANDER= ");	
		scanf("%i",&obj1[A].STD);
		printf("ENTER YOUR SCHOOL= \n");	
		scanf("%s",&obj1[A].SCHOOL);
	}
	
	
	printf("\n\n\t>>>>>>>>>>>>STUDENT ALL DATA<<<<<<<<<<<<<<<\t\n\n");
	
	printf("|STUDENT ID\tNAME\tAGE\tCOURSE\tCITY\tSTANDER\tSCHOOL|\n");
	printf("|----------------------------------------------------|\n");
	
	for(A=0;A<i;A++)
	{
		printf("|%i\t%s\t%i\t%s\t%s\t%i\t%s|\n",obj1[A].ID,obj1[A].NAME,obj1[A].AGE,obj1[A].COURSE,obj1[A].CITY,obj1[A].STD,obj1[A].SCHOOL);
	}
}
