#include <stdio.h>
#include <stdlib.h>

int gcd_recursive(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if(b == 0) return a;
    return gcd_recursive(b, a % b);
}

int gcd_iterative(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while(b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void)
{
    int x, y;
    printf("Welcome to GCD calculator\n");
    printf("Enter the two values: ");
    if(scanf("%d %d", &x, &y) != 2) return 0;

    int g1 = gcd_recursive(x,y);
    int g2 = gcd_iterative(x,y);

    printf("\nGCD recursive: %d\n", g1);
    printf("\nGCD iterative: %d\n", g2);
    return 0;
}
