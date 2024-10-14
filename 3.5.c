#include <stdio.h>
#include <math.h>
int main() {
    double t, b;
    printf("Enter an angle in degrees: ");
    scanf("%lf", &t);
    double r = t * (M_PI / 180.0);
    b = 1.0 / tan(r);

    printf("cot(%.2lf) = %.2lf\n", t, b);

    return 0;
}
