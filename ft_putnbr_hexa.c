/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:05:40 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/07 21:01:46 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa(unsigned long long nb, char *base, print_t	*ptr)
{
	if (nb >= 16)
	{
		ft_putnbr_hexa(nb / 16, base, ptr);
	}
	ft_putchar(base[nb % 16], ptr);
}