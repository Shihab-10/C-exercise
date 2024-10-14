#include <stdio.h>

int main() {
    int a;

    printf("Enter the mark: ");
    scanf("%d", &a);

    if (a >= 80) {
        printf("First Division");
    } else if (a >= 60) {
        printf("Second Division");
    } else if (a >= 50) {
        printf("Third Division");
    } else {
        printf("Fail");
    }

    return 0;
}
