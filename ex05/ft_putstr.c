
#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
void    ft_putstr(char *str)
{
    int    counter;
 
    counter = 0;
    while (str[counter])
    {
        ft_putchar(str[counter]);
        counter++;
    }
}
int main() {
   
    return 0;
}
