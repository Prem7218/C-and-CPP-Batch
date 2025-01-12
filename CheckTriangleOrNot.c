#include <stdio.h>

int main() {

   int side1 = 0;
   int side2 = 0;
   int side3 = 0;

   printf("\n\t\t[*] Check Wheather Enter Side's Make Vaild Triangle OR Not");
   
   printf("\n\t[*] Enter 1st Side: ");
   scanf("%d", &side1);

   printf("\n\t[*] Enter 2nd Side: ");
   scanf("%d", &side2);

   printf("\n\t[*] Enter 3rd Side: ");
   scanf("%d", &side3);

    if(((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)) {
        printf("Enter Side's are Make Valid Triangle...");
    }
    else {
        printf("Enter Side Not Make Valid Triangle...");
    }

    return 0;
}