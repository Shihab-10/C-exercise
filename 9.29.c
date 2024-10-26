#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Fibonacci numbers from 1 to %d are: ", n);
    for (int i = 0; a<=n;i++) {
        if (a>=1){
            printf("%d ", a);
        }
        c=a+b;
        a=b;
        b=c;
    }
}
