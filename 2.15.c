#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    c = a ^ b;
    printf("Bitwise Exclusive OR result: %d",c);
    return 0;
}
