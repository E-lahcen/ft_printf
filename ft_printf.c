/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:28:56 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/08 13:14:29 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

typedef struct s_vars
{
	t_print	ptr;
	char	percent;
	int		result;
	int		i;
	char	*base1;
	char	*base2;
}	t_vars;

void	initialise_vars(t_vars *s)
{
	s->percent = '%';
	s->ptr.len = 0;
	s->i = 0;
	s->result = 0;
	s -> base1 = "0123456789abcdef";
	s -> base2 = "0123456789ABCDEF";
}

void	check_it(char c, t_vars *s)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(s -> ptr.args, int), &s -> ptr);
	if (c == 'u')
		ft_putnbr_unsigned(va_arg(s -> ptr.args, int), &s -> ptr);
	else if (c == 'c')
		ft_putchar(va_arg(s -> ptr.args, int), &s -> ptr);
	else if (c == 's')
		ft_putstr(va_arg(s -> ptr.args, char *), &s -> ptr);
	else if (c == 'x')
		ft_putnbr_hexa(va_arg(s -> ptr.args, int), s -> base1, &s -> ptr);
	else if (c == 'X')
		ft_putnbr_hexa(va_arg(s -> ptr.args, int), s -> base2, &s -> ptr);
	else if (c == 'p')
	{
		ft_putstr("0x", &s -> ptr);
		ft_putpointer(va_arg(s -> ptr.args, L), s -> base1, &s -> ptr);
	}
	else if (c == '%')
	{
		write(1, &s -> percent, 1);
		s -> result++;
	}
}

int	ft_printf(const char *format, ...)
{
	t_vars	s;

	initialise_vars(&s);
	va_start(s.ptr.args, format);
	while (format[s.i])
	{
		if (format[s.i] == '%' && (format[s.i + 1] == 'd'\
		|| format[s.i + 1] == 'i' || format[s.i + 1] == 's'\
		|| format[s.i + 1] == 'x' || format[s.i + 1] == 'p'\
		|| format[s.i + 1] == 'X' || format[s.i + 1] == 'c'\
		|| format[s.i + 1] == '%' || format[s.i + 1] == 'u'))
		{
			check_it(format[s.i + 1], &s);
			s.i += 2;
		}
		else
		{
			ft_putchar(format[s.i], &s.ptr);
			s.i += 1;
		}
	}
	s.result += s.ptr.len;
	va_end(s.ptr.args);
	return (s.result);
}
