/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:31:30 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/07 21:45:27 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct  print_s
{
    va_list args;
    int     len;
}   print_t;

int     ft_printf(const char *, ...);
void	ft_putstr(char *str, print_t *ptr);
void    ft_putchar(int c, print_t *ptr);
void	ft_putnbr(int nb, print_t *ptr);
void	ft_putnbr_unsigned(unsigned int nb, print_t	*ptr);
void	ft_putnbr_hexa(unsigned long long nb, char* base, print_t	*ptr);