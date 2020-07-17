 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:30:14 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:37:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }
int    ft_atoi(char *str)
{
    int    i;
    int    negativ;
    int    number;
 
    i = 0;
    negativ = 0;
    number = 0;
    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
        || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    if (str[i] == 45)
        negativ = 1;
    if ((str[i] == 45) || (str[i] == 43))
        i++;
    while (str[i] >= 48 && str[i] <= 57)
    {
        number *= 10;
        number += ((int)str[i] - 48);
        i++;
    }
    if (negativ == 1)
        return (-number);
    else
        return (number);
}
