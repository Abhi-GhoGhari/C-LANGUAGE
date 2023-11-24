#include <stdio.h>
void cnv(int n) 
{
    int binary[32];
    int i = 0;
    if (n == 0) 
    {
        printf("THE BINORY VALUE IS= 0\n");
    }
    while (n > 0) 
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("THE BINORY VALUE IS= ");
    int v;
	for (v = i - 1; v >= 0; v--) 
    {
        printf("%i", binary[v]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("ENTER DECIMAL NUMBER= ");
    scanf("%i", &n);
    cnv(n);
}
