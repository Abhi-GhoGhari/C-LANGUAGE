#include <stdio.h>
int strLength(char str[]) 
{
    int len = 0;    
    while (str[len] != '\0') 
    {
        len++;
    }
    return len;
}

int main() {
    char inputStr[100];  
    puts("ENTER ANY STRING= ");
    gets(inputStr);
    printf("LENTH IS= %i\n", strlen(inputStr));
}

