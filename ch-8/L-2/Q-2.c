#include<stdio.h>

int main()
{
   int Y1,Y2;

   printf("ENTER FIRST YEAR= ");
   scanf("%i",&Y1);
   printf("ENTER SECONND YEAR= ");
   scanf("%i",&Y2);

   int Y=0,a[Y2-Y1];
   for (int A =Y1 ; A <= Y2; A++)
   {
        if (A%4==0)
        {
            a[Y]=A;
            Y++;
        }
   }
   for (int i = 0; i < Y; i++)
   {
        printf("%i\n",a[i]);
   }   
}
