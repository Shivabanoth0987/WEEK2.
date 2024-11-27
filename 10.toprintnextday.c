#include <stdio.h>

int main() {
    int year, month;
    
    printf("Enter year: \n");
    scanf("%d", &year);
    
    printf("Enter month number: \n");
    scanf("%d", &month);
    
    switch (month) {
        case 1:
            printf("It is January (Contains 31 days)\n");
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("It is February (Contains 29 days)\n");  // Leap year
            } else {
                printf("It is February (Contains 28 days)\n");  // Non-leap year
            }
            break;
        case 3:
            printf("It is March (Contains 31 days)\n");
            break;
        case 4:
            printf("It is April (Contains 30 days)\n");
            break;
        case 5:
            printf("It is May (Contains 31 days)\n");
            break;
        case 6:
            printf("It is June (Contains 30 days)\n");
            break;
        case 7:
            printf("It is July (Contains 31 days)\n");
            break;
        case 8:
            printf("It is August (Contains 31 days)\n");
            break;
        case 9:
            printf("It is September (Contains 30 days)\n");
            break;
        case 10:
            printf("It is October (Contains 31 days)\n");
            break;
        case 11:
            printf("It is November (Contains 30 days)\n");
            break;
        case 12:
            printf("It is December (Contains 31 days)\n");
            break;
        default:
            printf("Invalid month number!\n");
            break;
    }

    return 0;
}
