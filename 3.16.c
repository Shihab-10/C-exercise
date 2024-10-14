#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Enter a number : ");
    scanf("%d", &a);

    b = (int)exp(a);

    printf("e to the power of %d is %d\n", a, b);

    return 0;
}
