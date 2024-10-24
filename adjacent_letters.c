#include <stdio.h>

int main() {
  char word[100];
  char adjacent_word[100];

  printf("Enter the word: ");
  scanf("%s", word);

  int length = 0;

  for (int i = 0; word[i] != '\0'; i++) {
    length++;
  }

  for (int i = length - 1; i >= 0; i--) {
    adjacent_word[length - i - 1] = word[i];
  }

  adjacent_word[length] = '\0';

  printf("Adjacent word: %s\n", adjacent_word);

  return 0;
}