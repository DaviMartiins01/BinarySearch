#include <stdio.h>

void InputNumber(void);

int typedNumber;

int main()
{
    InputNumber();
}

void InputNumber(void)
{
  printf("Typer a number \n>>> ");
  scanf("%d", typedNumber);
}
