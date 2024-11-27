#include<stdio.h>

int main() {
    int units;
    float charge_per_unit = 5.00;
    float surcharge = 50.00;
    float total_bill;

    printf("Enter the number of units consumed: \n");
    scanf("%d", &units);

    total_bill = (units * charge_per_unit) + surcharge;

    printf("Electricity bill: %.2f\n", total_bill);

    return 0;
}
