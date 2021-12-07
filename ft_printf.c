/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 00:11:23 by oel-berh          #+#    #+#             */
/*   Updated: 2021/12/05 01:41:46 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_def(char str, void *info, int *count)
{
	if (str == 'd' || str == 'i')
		ft_putnbr((int)info, count);
	else if (str == 'c')
		ft_putchar((int)info, count);
	else if (str == 's')
		ft_putstr((char *)info, count);
	else if (str == 'u')
		ft_putunsigned((unsigned int)info, count);
	else if (str == 'X')
		ft_putnbr_hexa((unsigned int)info, 'X', count);
	else if (str == 'x')
		ft_putnbr_hexa((unsigned int)info, 'x', count);
	else if (str == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_hexa((unsigned long long)info, 'x', count);
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	info;
	int		count;

	count = 0;
	va_start(info, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'u' || *str == 'd' || *str == 'i' || *str == 'x'
				|| *str == 'X' || *str == 'p' || *str == 'c' || *str == 's')
			{
				ft_def(*str, va_arg(info, void *), &count);
			}
			else
				ft_putchar(*str, &count);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	va_end(info);
	return (count);
}
