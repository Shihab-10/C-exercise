#include <stdio.h>
#include <math.h>

int main() {
    int a, b, r;

    printf("Enter the base number : ");
    scanf("%d", &a);

    printf("Enter the exponent : ");
    scanf("%d", &b);

    r = (int)pow(a, b);

    printf("The value of %d^%d is %d\n", a, b, r);

    return 0;
}

