#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first side of triangle: \n");
    scanf("%d", &a);

    printf("Enter second side of triangle:\n");
    scanf("%d", &b);

    printf("Enter third side of triangle: \n");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Given sides form an equilateral triangle.\n");
    } else if (a == b || b == c || a == c) {
        printf("Given sides form an isosceles triangle.\n");
    } else {
        printf("Given sides form a scalene triangle.\n");
    }

    return 0;
}
