#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter a number(1): \n");
    scanf("%d", &a);
    printf("Enter a number(2): \n");
    scanf("%d", &b);
    printf("Enter a number(3): \n");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Given numbers are equal.\n");
    } else {
        printf("Given numbers are not equal.\n");
    }

    return 0;
}
