#include <stdio.h>

int main() {
  int i, sum = 0, n = 9;
  for (i=1 ; i <= n ; ++i) {
    sum += i;
  }
  printf("Sum of numbers from 1 to %d is %d", n, sum);
  printf("\n");
  return 0;
}
