#include<stdio.h>
void cube();

void cube(int A)
{
    A % 3== 0 && A % 5== 0
        ?printf("The given number is divisible by both 3 & 5.")
        :printf("The given number is not divisible by both 3 & 5.");
}
int main()
{
    int number;
    printf("ENTER ANY NUMBER= ");
    scanf("%i",&number);
    cube(number);
}