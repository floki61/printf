/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:43:52 by oel-berh          #+#    #+#             */
/*   Updated: 2021/12/04 20:57:49 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexa(unsigned long long n, char c, int *count)
{
	if (n <= 9)
	{
		ft_putchar(n + '0', count);
	}
	else if (n >= 10 && n <= 15)
	{
		if (c == 'X')
			ft_putchar(n + 55, count);
		else
			ft_putchar(n + 87, count);
	}
	else
	{
		ft_putnbr_hexa(n / 16, c, count);
		ft_putnbr_hexa(n % 16, c, count);
	}
}
