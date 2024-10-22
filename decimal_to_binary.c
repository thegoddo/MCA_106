#include <stdio.h>

int main() {
  int decimal, index = 0;
  char binary[32];
  printf("Enter the decimal: ");
  scanf("%d", &decimal);

  while (decimal > 0) {
    int remainder = decimal % 2;
    binary[index++] = (remainder == 0) ? '0' : '1';
    decimal /= 2;
  }

  for (int i = index - 1; i >= 0; i--) {
    printf("%c", binary[i]);
  }

  printf("\n");
}