/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:44:33 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/08 13:21:47 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, t_print *ptr)
{
	int	i;

	i = 0;
	if (!str)
		ft_putstr("(null)", ptr);
	else
	{
		while (str[i])
		{
			ft_putchar(str[i], ptr);
			i++;
		}
	}
}
