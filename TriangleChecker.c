#include <stdio.h>

int main() {

    int side1 = 0, side2 = 0, side3 = 0;

    printf("\n\t\t[*]\t Check Which Triangle is Created By You\t[*]");
    printf("\n\t[*] Enter 1st Side Here : ");
    scanf("%d", &side1);

    printf("\n\t[*] Enter 2nd Side Here : ");
    scanf("%d", &side2);

    printf("\n\t[*] Enter 3rd Side Here : ");
    scanf("%d", &side3);

/* 
    in-equality Formula: 
    1) side1 + side2 > side3
    2) side2 + side3 > side1
    3) side1 + side3 > side2
*/

/*
    s1  s2 s3      (s1)^2 + (s2)^2 = (s3)^2
    3   4   5 ---->   9   +  16    = 25     -----> 16 + 25 = 9
*/

/*
    Operator Precidence: 
    BODMAS: BO (Bracket of) ----> D (Division) ===> M (Multiplication) ----> A (Addition) ----> S (Substraction)
    Example: 5 + (5 * 4) / 3 * 2 - 1
    I) 5 + 20 / 3 * 2 - 1
   II) 5 + 3.33 * 2 - 1
  III) 5 + 6.66 - 1 
   IV) 11.66 - 1
    V) 10.66


    Q) 5 + (4 * 2) - 1  ---> 5 + 8 - 1 ----> 13 - 1 ---> 12
*/ 

    if(((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)) {
        printf("\n\t[*] Enter Value's Create Valid Triangle....\n");

        if((side1 == side2) && (side2 == side3) && (side1 == side3)) {
            printf("\n\t[*] This is an Equilateral Triangle...");
        }
        else if((((side1 * side1) + (side2 * side2)) == (side3 * side3)) ||
                (((side1 * side1) + (side3 * side3)) == (side2 * side2)) ||
                (((side2 * side2) + (side2 * side2)) == (side1 * side1))
        ) {
             printf("\n\t[*] This is an Right Angle Triangle...");
        } else {
            printf("\n\t[*] This is an Different Angle Triangle...");
        }

    } else {
        printf("\n\t[*] Enter Value's Not Create Valid Triangle....\n");   
    }
    return 0;
}






















/*  
    Operator Precidence: 
    BODMAS: BO (Bracket Of) ----> D (Divison) ----> M (Multiplication) ----> A (Addition) ----> S (Substraction)
    Example: 5 + (5 * 4) / 2 * 1;
    1) BO ---> 5 + (20) / 2 * 1;
    2) D  ---> 5 + 10 * 1;
    3) M  ---> 5 + 10;
    4) A  ---> 15;
    5) S  ---> ----

    Ans: 15

*/