#include <stdio.h>

float avg(int, int, int, int);

int main(void) {
  int a, b, c, d;
  printf("Please enter 4 values: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  float average = avg(a, b, c, d);
  printf("Average is: %.2f", average);
  return 0;
}

float avg(int a, int b, int c, int d) {
  float sum = a + b + c + d;
  return sum / 4;
}