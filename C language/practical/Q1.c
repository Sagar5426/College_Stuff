#include <stdio.h>

void main() {
    int salary = 80000;
    int tax = 0;
    double afterTax = 0; 

    if (salary <= 50000) {
        tax = 0;
    } else if (salary <= 60000) {
        tax = 10;
    } else if (salary <= 120000) {
        tax = 20;
    } else {
        tax = 30;
    }

    afterTax = salary - (salary * tax / 100.0);

    printf("Tax Deducted: %d percent\n", tax);
    printf("Amount after Deduction: %.2f\n", afterTax); 
}
