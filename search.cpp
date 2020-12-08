#include <stdio.h>

void InputNumber(void);

char typedNumber;


int main()
{
    InputNumber();
}

void InputNumber(void)
{
  printf("Typer a number \n>>> ");
  scanf("%c", &typedNumber);
}
