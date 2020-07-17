 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:30:14 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:37:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }
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

