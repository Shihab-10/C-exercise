#include <stdio.h>
#include <math.h>

int main() {
    double t;
    printf("Enter an angle in degrees: ");
    scanf("%lf", &t);

    double b = cos(t * M_PI / 180.0);

    printf("cos(%.2lf) = %.2lf", t, b);

    return 0;
}
