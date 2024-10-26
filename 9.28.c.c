#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d Fibonacci numbers are: ");
    for (int i = 1; i <= n; ++i) {
        c = a+b;
        a=b;
        b=c;
        printf("%d ",a);
    }
    return 0;
}
