#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    char uc = ch - 32;
    printf("Uppercase character: %c", uc);

    return 0;
}
