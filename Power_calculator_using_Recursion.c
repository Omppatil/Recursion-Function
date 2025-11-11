#include <stdio.h>

int power(int base, int exp);

int main(void) {
    int base, exp;
    printf("Welcome to Power Calculator\n");
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    int result = power(base, exp);
    printf("%d^%d = %d\n", base, exp, result);

    return 0;
}

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}
