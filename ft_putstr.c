/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:44:33 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/07 21:26:30 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, print_t *ptr)
{
	int i;

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
