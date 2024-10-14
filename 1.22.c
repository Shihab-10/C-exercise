#include <stdio.h>
int main() {
    int day, month, year;
    printf("Enter a date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Day: %d\n", day);
    printf("Month: %d\n", month);
    printf("Year: %d\n", year);
    return 0;
}
