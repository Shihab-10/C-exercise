#include <stdio.h>
#include <math.h>

int main() {
    double a, r;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &a);
    r = a * (M_PI / 180.0);
    double b = 1.0 / sin(r);

    printf("cosec(%.2lf) = %.2lf\n", a, b);

    return 0;
}
