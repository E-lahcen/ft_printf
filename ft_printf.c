/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:28:56 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/05 23:36:06 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int ft_printf(const char *format, ...)
{
    va_list ptr;
    int     nbr_arg;
    int     i;
    int     j;
    
    nbr_arg = 0;
    i = 0;
    while (format[i])
    {
        if (format[i] == '%')
        {
            nbr_arg++;
        }
            i++;
    }
    va_start(ptr, format);
    i = 0;
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1] == 'd')
        {
            j = va_arg(ptr, int);
            ft_putnbr(j);
            return (ft_strlen(ft_itoa(j)));
        }
        i++;
    }
    va_end(ptr);
    return (0);
}