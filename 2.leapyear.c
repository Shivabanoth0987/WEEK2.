#include<stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Given year %d is a Leap year.\n", year);
    } else {
        printf("Given year %d is not a Leap year.\n", year);
    }

    return 0;
}
