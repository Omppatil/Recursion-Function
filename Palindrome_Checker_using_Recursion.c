#include <stdio.h>
int reverse(int num, int rev);

int main(void) {
  int num;
  printf("Welcome to Palindrome Checker\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  int rev = reverse(num, 0);
  if(num == rev) {
    printf("%d is Palindrome.", num);
  } else {
    printf("%d is not Palindrome.", num);
  }
  return 0;
}

int reverse(int num, int rev) {
  if(num == 0) return rev;
  int remainder = num % 10;
  int new_num = num / 10;
  int new_rev = rev * 10 + remainder;
  return reverse(new_num, new_rev);
}