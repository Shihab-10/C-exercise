#include <stdio.h>
int main() {
    int a, b = 0, c = 2;
    printf("Enter the number of prime numbers to display: ");
    scanf("%d", &a);
    printf("The first %d prime numbers are: ", a);
    for (int i = 0; b < a; c++) {
        int x = 0;
        for (int d = 2; d <= c / 2; d++) {
            if (c % d == 0) {
                x = 1;
                break;
            }
        }
        if (x==0) {
            printf("%d ", c);
            b++;
        }
    }
}
