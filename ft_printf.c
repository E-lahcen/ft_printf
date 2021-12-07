/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:28:56 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/07 21:18:05 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	print_t	ptr;
	va_list test;
    char percent;
	int	res;
	int	i;

	percent = '%';
    ptr.len = 0;
	i = 0;
	res = 0;
	va_start(test, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			ft_putnbr(va_arg(test, int), &ptr);
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'u')
		{
			ft_putnbr_unsigned(va_arg(test, int), &ptr);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			ft_putchar(va_arg(test, int), &ptr);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			ft_putstr(va_arg(test, char *), &ptr);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'x')
		{
			ft_putnbr_hexa(va_arg(test, int), "0123456789abcdef", &ptr);
			i += 2;
		}
        else if (format[i] == '%' && format[i + 1] == 'X')
		{
			ft_putnbr_hexa(va_arg(test, int), "0123456789ABCDEF", &ptr);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'p')
		{
			ft_putstr("0x",&ptr);
			ft_putnbr_hexa(va_arg(test, unsigned long long), "0123456789abcdef", &ptr);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, &percent, 1);
			res++;
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			res++;
			i++;
		}
	}
	res += ptr.len;
	va_end(test);
	return (res);
}
