#include <stdio.h>

void swap_by_value(int a, int b) {
  int temp = a;
  a = b;
  b = temp;

  printf("In swap by value: a = %d, b = %d\n", a, b);
}

void swap_by_reference(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;

  printf("In swap by reference: a = %d, b = %d\n", *a, *b);
}

int main() {
  int a = 6, b = 4;
  printf("Original: a = %d, b = %d\n", a, b);
  swap_by_value(a, b);
  printf("After swapping by value: a = %d, b = %d\n", a, b);
  swap_by_reference(&a, &b);
  printf("After swapping by reference: a = %d, b = %d\n", a, b);
}