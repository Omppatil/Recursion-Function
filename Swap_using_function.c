#include <stdio.h>
void swap(int, int);

int main(void)
{
  int x, y;
  printf("\nWelcome to number Swapper");
  printf("\n\nPlease enter the value of x: ");
  scanf("%d", &x);
  printf("Now enter the value of y: ");
  scanf("%d", &y);
  swap(x, y);
  return 0;
}

void swap(int a, int b)
{
  printf("Before swap\n");
  printf("a: %d b: %d\n", a, b);

  int temp = a;
  a = b;
  b = temp;

  printf("After swap\n");
  printf("a: %d b: %d\n", a, b);
}