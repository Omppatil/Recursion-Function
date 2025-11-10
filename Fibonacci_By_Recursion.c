#include <stdio.h>

int fibonacci(int pos);

int main(void) {
  int r;
  printf("Please enter the range for fibonacci series: ");
  scanf("%d", &r);

  for(int i = 0; i < r; i++) {
    printf(" %d", fibonacci(i));
  }
  return 0;
}

int fibonacci(int pos) {
  if(pos <= 1) return pos;

  int next = fibonacci(pos - 1) + fibonacci(pos - 2);
  return next;
}
