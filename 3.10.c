#include <stdio.h>
#include <math.h>

int main() {
    double a, b;

    printf("Enter a value: ");
    scanf("%lf", &a);

    b = atan(a);

    b = b * (180.0 / M_PI);

    printf("tan inverse of %.2lf is %.2lf degrees", a, b);

    return 0;
}
