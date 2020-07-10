#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

 
void    ft_ultimate_div_mod(int *a, int *b)
{
    int    temp;
 
    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}
int main() {
   
    return 0;
}
