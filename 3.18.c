#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Enter a number : ");
    scanf("%d", &a);

    b = (int)log10(a);

    printf("log10(%d) = %d", a, b);

    return 0;
}
