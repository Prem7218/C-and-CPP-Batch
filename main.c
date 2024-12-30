#include <stdio.h>

int main() {

    /* 
        1) Conditional Statement: 
            --- 1) Normal Using 
                --- a) Simple if, 
                    b) if else, 
                    c) nested-if-else, 
                    d) if-else-ladder
    */

    /* 
        Comparison or Relational Operator's: 

            Oprand   Oprator    Operand                                            20    >=   15          15      <=   10
            10        <         15,      15 > 10,  15 == 15, 15 === 15, 20,  hamaraNum >= userNum,   hamaraNum  <= userNum

            >, <, >=, <=, ==, ===, 
         
    */

    //  -7 -6- -5 -4 -3 -2 -1  0 1 2 3 4 5 6 7 8

    int num = 0;

    printf("\n\t * [*] The NUmber is +ve OR -ve *");
    
    printf("\n\t[*] Enter Number here: ");
    scanf("%d",&num);

    printf("Enter Number is: %p", num);

    if(num == 0) {
        printf("\n\t[*] Enter number is %d zero", num);
    }
    else {
        if(num > 0) {
            printf("\n\t[*] The Number is %d is +ve", num);
        }
        else {
            printf("\n\t[*] The Number is %d is -ve", num);
        }
    }
   return 0;
}
