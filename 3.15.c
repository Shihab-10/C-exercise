#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = (int)sqrt(a);
    printf("Square root of %d is %d", a, b);

    return 0;
}
