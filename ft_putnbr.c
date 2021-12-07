/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:53:23 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/07 21:38:05 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, print_t	*ptr)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', ptr);
		ft_putnbr(-1 * (nb / 10), ptr);
		ft_putchar('8', ptr);
	}
	else if (nb < 0)
	{
		ft_putchar('-', ptr);
		ft_putnbr(-1 * nb, ptr);
	}
	else if (nb >= 0 && nb <= 9)
	{
		ft_putchar('0' + nb, ptr);
	}
	else if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr(nb / 10, ptr);
		ft_putchar('0' + nb % 10, ptr);
	}
}
