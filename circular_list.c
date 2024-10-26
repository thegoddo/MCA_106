#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *add_to_empty(int data, struct Node *last) {
  if (last != NULL)
    return last;

  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  last = newNode;
  last->next = last;

  return last;
}

struct Node *add_front(int data, struct Node *last) {
  if (last == NULL)
    return add_to_empty(data, last);
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  newNode->data = data;
  newNode->next = last->next;
  last->next = newNode;

  return last;
}

struct Node *add_end(int data, struct Node *last) {
  if (last == NULL)
    return add_to_empty(data, last);

  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  newNode->data = data;
  newNode->next = last->next;
  last->next = newNode;

  last = newNode;
  return last;
}

void traverse(struct Node *last) {
  struct Node *p;

  if (last == NULL) {
    printf("The list is empty!!!");
    return;
  }
  p = last->next;

  do {
    printf("%d ", p->data);
    p = p->next;
  } while (p != last->next);
};

void delete_node(struct Node **last, int data) {
  if (*last == NULL)
    return;

  if ((*last)->data == data && (*last)->next == *last) {
    free(*last);

    *last = NULL;
    return;
  }

  struct Node *temp = *last, *d;

  if ((*last)->data == data) {
    while (temp->next != *last)
      temp = temp->next;

    temp->next = (*last)->next;
    free(*last);

    *last = temp;
  }

  // travel to the node to be deleted
  while (temp->next != *last && temp->next->data != data) {
    temp = temp->next;
  }

  // if node to be deleted was found
  if (temp->next->data == data) {
    d = temp->next;
    temp->next = d->next;
    free(d);
  }
}

int main() {
  struct Node *last = NULL;

  last = add_to_empty(4, last);
  last = add_front(3, last);
  last = add_end(2, last);

  traverse(last);
  delete_node(&last, 2);
  printf("\n");
  traverse(last);
  return 0;
}