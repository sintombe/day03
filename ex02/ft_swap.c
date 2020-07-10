#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
void    ft_swap(int *a, int *b)
{
    int    temp;
 
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    
    return 0;
}
