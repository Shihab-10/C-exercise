#include <stdio.h>
#include <math.h>
int main() {
    double t;
    printf("Enter an angle in degrees: ");
    scanf("%lf", &t);

    double b = tan(t * M_PI / 180.0);

    printf("tan(%.2lf) = %.2lf\n", t, b);

    return 0;
}
