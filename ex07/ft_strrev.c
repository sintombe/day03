 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:30:14 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:37:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }
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
