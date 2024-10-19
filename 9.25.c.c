#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the values of m and n (m > n): ");
    scanf("%d %d", &m, &n);

    printf("Prime numbers between %d and %d are: ", n, m);

    for (int i = n + 1; i < m; i++) {
        int a = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                a = 0;
                break;
            }
        }
        if (a==1  && i > 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

