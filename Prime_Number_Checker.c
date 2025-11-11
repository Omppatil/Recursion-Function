#include <stdio.h>

int isprime(int x);

int main(void)
{
    int a;
    printf("Welcome to Prime Number Checker\n");
    printf("Enter the the number: ");
    scanf("%d", &a);

    if(isprime(a))
    {
        printf("\n%d is Prime Number\n", a);
    }
    else
    {
        printf("\n%d is not Prime Number\n", a);
    }

}

int isprime(int x)
{
    int i;

    if(x <= 1) return 0;
    for(i = 2; i <= x/2; i++)
    {
        if(x % 2 == 0) return 0;
    }
     return 1;
}
