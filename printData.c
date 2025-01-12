#include <stdio.h>

int main() {

    int num1 = 0;
    float num2 = 10.1;
    char character = 'A';

    printf("Enter Integer Number Here: ");
    scanf("%d", &num1);

    printf("Enter Float Number Here: ");
    scanf("%f", &num2);

    printf("Enter Character Here: ");
    scanf(" %c", &character);


    printf("\n\tThe Integer Number is: %d", num1);
    printf("\n\tThe Float Number is: %.2f", num2);
    printf("\n\tThe Character is: %c", character);

    return 0;
}