#include <stdio.h>
int square(int);

int main(void) {
  int num;
  printf("Welcome to Square Calculator\n");
  printf("Please enter you number: ");
  scanf("%d", &num);
  printf("Square of %d: %d", num, square(num));
  return 0;
}

int square(int a) {
  int result = a * a;
  return result;
}