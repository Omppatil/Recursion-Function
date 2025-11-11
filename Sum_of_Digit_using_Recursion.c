#include <stdio.h>
int add(int num, int sum);

int main(void) {
  int num;
  printf("Welcome to Number digit Adder\n");
  printf("Please enter the Number: ");
  scanf("%d", &num);
  int sum = add(num, 0);
  printf("Sum of Digits: %d", sum);
  return 0;
}

int add(int num, int sum) {
  if(num == 0) return sum;

  int digit = num % 10;
  int new_num = num / 10;
  int new_sum = sum + digit;
  return add(new_num, new_sum);
}