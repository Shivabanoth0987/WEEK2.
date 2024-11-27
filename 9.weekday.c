
#include <stdio.h>

int main() {
    int a;
    
    printf("Enter a number between 1 to 7: \n");
    scanf("%d", &a);

    switch(a) {
        case 1: 
            printf("It is Monday\n");
            break;
        case 2: 
            printf("It is Tuesday\n");
            break;
        case 3: 
            printf("It is Wednesday\n");
            break;
        case 4: 
            printf("It is Thursday\n");
            break;
        case 5: 
            printf("It is Friday\n");
            break;
        case 6: 
            printf("It is Saturday\n");
            break;
        case 7: 
            printf("It is Sunday\n");
            break;
        default: 
            printf("Out of range\n");
            break;
    }

    return 0;
}
