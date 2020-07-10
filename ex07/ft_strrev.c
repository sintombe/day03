#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
char    *ft_strrev(char *str)
{
    int        counter;
    int        size_str;
    char    temp;
 
    counter = 0;
    size_str = 0;
    while (str[size_str])
        size_str++;
    size_str -= 1;
    while (counter < size_str)
    {
        temp = str[size_str];
        str[size_str] = str[counter];
        str[counter] = temp;
        counter++;
        size_str--;
    }
    return (str);
}
int main() {
  
    return 0;
}
