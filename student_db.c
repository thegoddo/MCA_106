#include <stdio.h>
#include <stdlib.h>

struct Student {
  char name[20];
  int age;
  float grade;
};

int main() {
  struct Student students[5];
  system("clear");
  for (int i = 0; i < 5; i++) {
    printf("\nEnter the student's name: ");
    scanf("%s", students[i].name);
    printf("\nEnter the student's age: ");
    scanf("%d", &students[i].age);
    printf("\nEnter the student's grade: ");
    scanf("%f", &students[i].grade);
    system("clear");
  }

  for (int i = 0; i < 5; i++) {
    printf("Name: %s\n", students[i].name);
    printf("Age: %d\n", students[i].age);
    printf("Age: %.2f\n", students[i].grade);
  }

  return 0;
}