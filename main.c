/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelhlami <lelhlami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:31:26 by lelhlami          #+#    #+#             */
/*   Updated: 2021/12/07 21:47:11 by lelhlami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    char a = 'd';
    char b[] = "Hello world ";
    int c = 923685477;
    
    int j = ft_printf("%% %c %s %d %p\n", a, NULL, c, "lean");
    int i =    printf("%% %c %s %d %p\n", a, NULL, c, "lean");
    printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

    printf("\n i = %d\n j = %d", i, j);
    return 0;
}