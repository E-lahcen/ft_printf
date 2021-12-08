/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:31:30 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/08 13:16:10 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define L unsigned long long

typedef	struct print_s
{
	va_list	args;
	int		len;
}	t_print;

int		ft_printf(const char *, ...);
void	ft_putstr(char *str, t_print *ptr);
void	ft_putchar(int c, t_print *ptr);
void	ft_putnbr(int nb, t_print *ptr);
void	ft_putnbr_unsigned(unsigned int nb, t_print	*ptr);
void	ft_putnbr_hexa(unsigned int nb, char* base, t_print	*ptr);
void	ft_putpointer(unsigned long long nb, char *base, t_print *ptr);
