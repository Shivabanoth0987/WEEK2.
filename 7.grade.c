#include <stdio.h>

int main() {
    int p, c, m, b, C;

    printf("Enter physics marks:\n");
    scanf("%d", &p);

    printf("Enter maths marks:\n");
    scanf("%d", &m);

    printf("Enter Chemistry Marks:\n");
    scanf("%d", &c);

    printf("Enter Biology marks:\n");
    scanf("%d", &b);

    printf("Enter marks in computer:\n");
    scanf("%d", &C);

    int total = p + m + c + b + C;
    float percentage = (total * 100) / 500;

    if (percentage >= 90) {
        printf("Grade A");
    } else if (percentage >= 80) {
        printf("Grade B");
    } else if (percentage >= 70) {
        printf("Grade C");
    } else if (percentage >= 60) {
        printf("Grade D");
    } else if (percentage >= 40) {
        printf("Grade E");
    } else {
        printf("Grade F");
}
return 0;
}
