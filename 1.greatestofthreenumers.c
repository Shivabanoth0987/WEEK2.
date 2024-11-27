#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    printf("Enter the third number: \n");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("Given first number %d is the greatest number.\n", a);
    else if (b > a && b > c)
        printf("Given second number %d is the greatest number.\n", b);
    else
        printf("Given third number %d is the greatest number.\n", c);

    return 0;
}
