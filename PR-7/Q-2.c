#include <stdio.h>

void convert(int n) {
    int binary[32];
    int i = 0;


    if (n == 0) {
        printf("The Binary value is : 0\n");
        return;
    }


    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }


    printf("The Binary value is : ");
    int v;
	for (v = i - 1; v >= 0; v--) {
        printf("%d", binary[v]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    convert(n);

    return 0;
}
