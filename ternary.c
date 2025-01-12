#include <stdio.h>
int main() {

     int number = 0;
     printf("\n\t\t\t[*] Number is Grater than 0 or not [*]");
     printf("\n\t[*]Enter Number Here: ");
     scanf("%d", &number);

//   Using if-else
    // if-else ladder 

     if(number == 0)     printf("\n\t[*] Enter Number is == 0");
     else {
        if(number > 0) printf("\n\t[*] Enter Number is > 0");
         else          printf("\n\t[*] Enter Number is < 0");
     }

// Ternary Operator:

    int check = (number == 0) ? printf("\n\t[*] Enter Number is == 0") : 
                (number > 0) ? printf("\n\t[*] Enter Number is > 0")   : 
                printf("\n\t[*] Enter Number is < 0");

    printf("\n\t[(*)] The Value In Check: %d", check);

    return 0;
}