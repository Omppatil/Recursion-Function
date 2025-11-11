#include <stdio.h>
int factorial_by_loop(int);
int factorial_by_recursion(int);


int main(void) {
  int num;
  printf("\nWelcome to Factorial Calculator\n");
  printf("Please enter your number: ");
  scanf("%d", &num);

  int res1 = factorial_by_recursion(num);
  int res2 = factorial_by_loop(num);
  printf("\nFactorial of %d by recursion: %d", num, res1);
  printf("\nFactorial of %d by loop: %d", num, res2);
  return 0;
}

int factorial_by_recursion(int num) {
  if(num == 0) {
    return 1;
  }
  return num * factorial_by_recursion(num - 1);//function call itself
}

int factorial_by_loop(int num) {
  int fact = 1;
  int i = 2;
  while(i <= num) {
    fact *= i;
    i++;
  }
  return fact;
}

