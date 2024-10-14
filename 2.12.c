#include <stdio.h>
int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    // Fahrenheit to Celsius conversion formula
    c = (f-32)*5/9;
    printf("Temperature in Celsius: %.2f\n", c);
    return 0;
}
