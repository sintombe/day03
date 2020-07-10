
#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

 
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}
int main() {
  
    return 0;
}
