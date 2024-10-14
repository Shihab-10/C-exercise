#include <stdio.h>
#include <math.h>

int main() {
    double a, b;

    printf("Enter a value: ");
    scanf("%lf", &a);

    b = acos(1.0 / a);

    b = b * (180.0 / M_PI);

    printf("sec inverse of %.2lf is %.2lf degrees", a, b);

    return 0;
}
