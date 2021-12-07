/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:18:49 by oel-berh          #+#    #+#             */
/*   Updated: 2021/12/04 20:57:55 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			write (1, &str[i], 1);
			i++;
			*count += 1;
		}
	}
	else
	{
		write (1, "(null)", 6);
		*count += 6;
	}
}
