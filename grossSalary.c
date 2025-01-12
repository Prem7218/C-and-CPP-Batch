#include <Stdio.h>

int main() {

    long salary = 0;
    long grossSalary = 0;

    printf("\n\t\t\t[*] Calculate Gross Salary:\t\t");
    printf("\n\n\t[*] Enter Salary: ");
    scanf("%ld", &salary);

    // 100 ---> 80 || 10 ---> 8 || 1 ---> .80

    if(salary <= 10000) {
        grossSalary = salary + (salary * .80) + (salary * .20);
    }
    else if(salary < 18550) {
        grossSalary = salary + (salary * .80) + (salary * .25); 
    }
    else if(salary < 27500) {
        grossSalary = salary + (salary * .90) + (salary * .25); 
    }
    else {
        grossSalary = salary + (salary * .95) + (salary * .30); 
    }

    printf("\n\t[*] Gross Salary = %ld", grossSalary);

    return 0;
}