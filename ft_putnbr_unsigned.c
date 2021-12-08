/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:15:22 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/08 13:14:29 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nb, t_print	*ptr)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar('0' + nb, ptr);
	}
	else if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10, ptr);
		ft_putchar('0' + nb % 10, ptr);
	}
}
