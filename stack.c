#include <stdio.h>

int stack[5], top = -1;

void push(int data) {
  if (top > 4) {
    printf("Stack Overflow!!!\n");
  } else {
    top++;
    stack[top] = data;
  }
}

int pop() {
  int temp;
  if (top == -1) {
    printf("Stack Underflow!!!\n");
  } else {
    temp = stack[top];
    top--;
  }
  return temp;
}

void display() {
  for (int i = 0; i <= top; i++) {
    printf("%d ", stack[i]);
  }
}

int main() {
  push(5);
  push(2);
  push(8);
  push(9);
  push(2);
  push(0);
  push(0);

  printf("Popped: %d \n", pop());

  display();

  return 0;
}