#include<stdio.h>

int sum(int n,int s,int i)
{
	if(i<=n)
	{
		s+=i;
		i++;
	}
	else
	{
		printf("%i",s);
	}
}
int main()
{
	int a;
	printf("ENTER ANY NUMBER= ");
	scanf("%i",&a);
	sum(a,1,0);
}


