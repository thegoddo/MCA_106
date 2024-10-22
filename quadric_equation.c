#include <math.h>
#include <stdio.h>

int main() {
  int a, b, c;

  printf("Enter the coefficient a,b,c: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a == 0) {
    printf("Error: a cannot be zero\n");
    return 1;
  }

  double b_squared = (double)b * b;
  double discriminant = b_squared - 4 * a * c;

  if (discriminant < 0) {
    printf("Error: discriminant is negative\n");
    return 1;
  }

  double x1 = (-b + sqrt(discriminant)) / (2 * a);
  double x2 = (-b - sqrt(discriminant)) / (2 * a);

  printf("First root is: %.2f, Second root is: %.2f", x1, x2);
  return 0;
}