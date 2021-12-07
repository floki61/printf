/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:21:53 by oel-berh          #+#    #+#             */
/*   Updated: 2021/12/03 19:56:56 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	unsigned int	a;

	if (n < 0)
	{
		write (1, "-", 1);
		*count += 1;
		n *= -1;
	}
	a = n;
	if (a > 9)
	{
		ft_putnbr(a / 10, count);
		ft_putnbr(a % 10, count);
	}
	else
	{
		a += '0';
		write (1, &a, 1);
		*count += 1;
	}
}
