#include <stdio.h>

void count_to_100();

int main(void)
{
  printf("\nWelcome to Number counter from 1 to 100\n");
  printf("Count from 1 to 100:\n");
  count_to_100();
}

void count_to_100()
{
  for(int i = 1; i <= 100; i++)
  {
    printf(" %d", i);
  }
}
