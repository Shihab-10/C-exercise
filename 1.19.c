#include <stdio.h>
int main() {
    char a[60];
    printf("Enter a line of text: ");
    scanf("%[^\n]", a);
    printf("You entered: %s",a);
    return 0;
}
