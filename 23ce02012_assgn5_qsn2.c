#include<stdio.h>

int main() {
    int dividend, divisor, quotient = 0, remainder;

    printf("Enter the dividend =  ");
    scanf("%d", &dividend);
    printf("Enter the divisor =  ");
    scanf("%d", &divisor);

    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    remainder = dividend;

    // Output
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}