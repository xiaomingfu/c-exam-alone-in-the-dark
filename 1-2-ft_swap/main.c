#include "ft_swap.c"
#include <stdio.h>

int main(void)
{
  int a;
  int b;

  a = 3;
  b = 1;
  ft_swap(&a, &b);
  printf("%d,%d", a, b);
  return (0);
}
