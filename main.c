#include <stdio.h>

double getResult(double num1, double num2, char operator)
{
  switch (operator)
  {
  case '+': return num1 + num2;
  case '-': return num1 - num2;
  case '*': return num1 * num2;
  case '/': return num1 / num2;
  case '%': return (int) num1 % (int) num2;
  default: return num1;
  }
}

int main() {
  double num1, num2;
  char operator;
  int order = 1;

  printf("Input (order %d): ", order++);
  scanf("%lf %c %lf", &num1, &operator, &num2);

  num1 = getResult(num1, num2, operator);
  printf("Input (order %d): %g", order++, num1);

  while (1)
  {
    printf(" ");
    scanf("%*c %c %lf", &operator, &num2);
    num1 = num1 = getResult(num1, num2, operator);
    printf("Input (order %d): %g", order++, num1);
  }


  return 0;
}