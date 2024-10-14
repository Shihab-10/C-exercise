#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    printf("Enter a number : ");
    scanf("%d", &a);

    b = (int)log(a);

    printf("log(%d) = %d\n", a, b);

    return 0;
}
