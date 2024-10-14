#include <stdio.h>

int main() {
    int a,b;

    printf("Enter a number: ");
    scanf("%d", &a);

    // Using shift operator to multiply by 5
    b = (a << 2) + a;

    printf("Result of multiplication by 5: %d\n", b);

    return 0;
}
