#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a & 7;

    printf("Result of mod by 8: %d",b);

    return 0;
}
