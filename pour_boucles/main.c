#include <stdio.h>

int main() {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;
  int i;

  // Calculer 10! = 1 × 2 × 3 × ... × 10
  for (i = 0; i < 10; i++) {
    factorial *= array[i];  // équivaut à factorial = factorial * array[i];
  }

  printf("10! is %d.\n", factorial);

  return 0;
}

