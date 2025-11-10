#include <stdio.h>

int fibonacci(int pos);

int main(void) {
  int term;
  printf("Please enter the range for fibonacci series: ");
  scanf("%d", &term);

  for(int i = 0; i < term; i++) {
    printf(" %d", fibonacci(i));
  }
  return 0;
}

int fibonacci(int pos) {
  if(pos <= 1) return pos;

  int next = fibonacci(pos - 1) + fibonacci(pos - 2);
  return next;
}
