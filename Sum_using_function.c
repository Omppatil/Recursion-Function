#include <stdio.h>
int sum(int, int, int, int);

int main(void) {
  int a, b, c, d;
  printf("Please enter the 4 numbers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int result = sum(a, b, c, d);
  printf("sum: %d", result);
  return 0;
}

int sum(int a, int b, int c, int d) {
  int sum = a + b + c + d;
  return sum;
}