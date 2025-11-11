#include <stdio.h>
#include <math.h>

int countDigits(int num)
{
    int count = 0;
    if(num == 0) return 1;
    while(num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num)
{
    int n = countDigits(num);
    int temp = num, sum = 0;

    while(temp != 0)
    {
        int digit = temp % 10;
        sum = sum + pow(digit, n);
        temp = temp / 10;
    }
    return (sum == num);
}

int main(void)
{
    int num;
    printf("Welcome to Armstrong Number Checker\n");
    printf("Enter the Number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
    {
        printf("\n%d is Armstrong\n", num);
    }
    else
    {
        printf("\n%d is not Armstrong\n", num);
    }
    return 0;
}
