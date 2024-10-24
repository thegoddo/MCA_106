#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *insert(struct Node *head, int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  if (head == NULL) {
    head = newNode;
  } else {
    struct Node *temp = head;

    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
  }

  newNode->data = data;
  newNode->next = NULL;

  return head;
}

void display(struct Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

int main() {
  struct Node *head = NULL;
  head = insert(head, 15);
  head = insert(head, 19);
  head = insert(head, 13);
  head = insert(head, 12);
  display(head);
  return 0;
}