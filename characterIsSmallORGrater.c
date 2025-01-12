#include <stdio.h>

int main() {

    char character = 0;
    printf("\n\t\t[*]\t Checking Entered Character is Small OR Capital Letter\t[*]");
    printf("\n\n\t\t[*] Enter Character Here: ");
    scanf("%c", &character);

    // Checking Entered Is Character or not: A B C D------ Z,  a b c d---------z
    // A

   // Nested If Else:  
    // if(character >= 'A') {
    //     if(character <= 'Z') {

    //     }
    // }

    if((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        if(character >= 'A' && character <= 'Z') {
            printf("Enter Character: %c Capital Letter", character);
        }
        else {
            printf("Entered Character: %c Small Letter", character);
        }
    }
    else {
        printf("Entered Character: %c is Number Or Symbol", character);   
    }

// Logical Operator's: && , ||
            // character >= 'A' ----> character <= 'Z'
            // characterr >= 'A' && character <= 'Z'
                  //  True / 1   &&    True / 1  ===> {1} / True

// Comperision: + , -, * , /, %  ---->
            // Operand    Operator   Operand
            //    2          +          3

//1)     Logical AND:
    // 1st    2nd    ANS
    //  1      1      1
    //  1      0      0
    //  0      1      0
    //  0      0      0

//2)     Logical OR:
    // 1st    2nd    ANS
    //  1      1      1
    //  1      0      1
    //  0      1      1
    //  0      0      0


    return 0;
}