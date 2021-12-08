/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:34:29 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/08 13:22:24 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(L nb, char *base, t_print	*ptr)
{
	if (nb >= 16)
	{
		ft_putpointer(nb / 16, base, ptr);
	}
	ft_putchar(base[nb % 16], ptr);
}
