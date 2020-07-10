#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

 int main(void) {
  ft_ft(0);
  return 0;
}

