
#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
void    ft_sort_integer_table(int *table, int size)
{
    int    i;
    int    temp;
 
    i = 0;
    while (i < size)
    {
        if (table[i] > table[i + 1])
        {
            temp = table[i + 1];
            table[i + 1] = table[i];
            table[i] = temp;
            i = 0;
        }
        else
            i++;
    }
}
int main() {
   
    return 0;
}
