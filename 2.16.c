#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a >> 1;

    printf("Result of division by 2: %d\n", b);

    return 0;
}
