#include <stdio.h>

float max(float, float);

int main(void) {
  float a, b;
  printf("Welcome to Largest Foalting Number calculator\n");
  printf("Please enter a: ");
  scanf("%f", &a);
  printf("now Please enter b: ");
  scanf("%f", &b); 
  printf("Maximum value is: %.2f", max(a, b));
  return 0;
}

float max(float x, float y) {
  return x > y ? x : y;
}
