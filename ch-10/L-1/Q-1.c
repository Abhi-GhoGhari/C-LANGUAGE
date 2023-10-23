#include<stdio.h>
void cube();

void cube(int A)
{
    printf("CUBE IS= [%is]",A*A*A);
}
int main()
{
    int number;
    printf("ENTER ANY NUMBER= ");
    scanf("%i",&number);
    cube(number);
}