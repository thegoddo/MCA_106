#include <stdio.h>

int main() {
  char word[100];
  int freq[256] = {0};
  int length = 0;

  printf("Enter the word: ");
  scanf("%s", word);

  for (int i = 0; word[i] != '\0'; i++)
    length++;

  for (int i = 0; word[i] != '\0'; i++)
    freq[word[i]]++;

  printf("Length is: %d", length);
  printf("Frequency of each character: \n");
  for (int i = 0; i < 256; i++) {
    if (freq[i] > 0) {
      printf("%c: %d\n", i, freq[i]);
    }
  }

  return 0;
}