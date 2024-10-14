#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a & 3;

    printf("Result of mod by 4: %d",b);

    return 0;
}
