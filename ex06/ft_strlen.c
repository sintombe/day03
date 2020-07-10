#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
int        ft_strlen(char *str)
{
    int    i;
 
    i = 0;
    while (str[i])
        i++;
    return (i);
}
int main() {
   
    return 0;
}
