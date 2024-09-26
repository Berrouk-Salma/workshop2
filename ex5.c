#include <stdio.h>

void convertYear(int year) {
    int months = year * 12;
    int days = year * 365;
    long hours = days * 24;
    long minutes = hours * 60;
    long seconds = minutes * 60;

    printf("In %d year(s):\n", year);
    printf("Months: %d\n", months);
    printf("Days: %d\n", days);
    printf("Hours: %ld\n", hours);
    printf("Minutes: %ld\n", minutes);
    printf("Seconds: %ld\n", seconds);
}
int main() {
    int year;
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Convert Year\n");
        printf("2. Exit\n");
        printf("Enter your choice:\n ");
        scanf("%d",&choice);

        if (choice == 1) {
            printf("Enter the year: ");
            scanf("%d", &year);
            convertYear(year);
        }
    } while (choice != 2);

    return 0;
}