/* Design basic calculator using switch */
#include<stdio.h>
void main()
{
  float a, b;
  char ch;
  printf(" Enter the operator(+, -, *, /):- ");
  scanf("%c", &ch);
  printf("\n Enter the two operand:- ");
  scanf("%f %f", &a, &b);
  switch(ch)
  {
    case '+':
      printf(" \n .1%f + %.1f= %.1f", a, b, a + b);
      break;
    case '-':
      printf(" \n %.1f - %.1f= %.1f", a, b, a - b);
      break;
    case '*':
      printf(" \n %.1f * %.1f= %.1f", a, b, a * b);
      break;
    case '/':
      printf(" \n %.1f / %.1f= %.1f", a, b, a / b);
      break;
    default:
      printf("\n Invalid operator:- ");
  }
  /*  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  } */
}