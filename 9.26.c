#include <stdio.h>

int main() {
    int n, a, count = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i=2;i<=n;i++) {
        a=0;
        for (int j=2; j<=i / 2; j++) {
            if (i%j == 0) {
                a = 1;
                break;
            }
        }
        if (a==0) {
            count++; 
        }
    }
    printf("Total prime numbers from 1 to %d: %d\n", n, count);
    return 0;
}
