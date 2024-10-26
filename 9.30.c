#include <stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    int k = 0;
    for (int i = 0; a <= n; i++) {
        if (a == n) {
            k=1;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if (k=1) {
        printf("%d is a Fibonacci number", n);
    } else {
        printf("%d is not a Fibonacci number", n);
    }
}