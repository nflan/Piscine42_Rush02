/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:26:30 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 20:08:55 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <libc.h>
void	ft_putstr(char *str);
int		ft_strlen(char *str);

int	ft_print_too_long(char *str, int sz, int block, int i)
{
	if (sz % 3 == 0)
		ft_print_hundred(str[i - sz]);
	if (sz % 3 == 2)
	{
		if (str[i - sz] >= '2' && str[i - sz] <= '9')
			ft_print_dec(str[i - sz]);
		else
		{
			if (str[i - sz] == '1')
				ft_print_teen(str[i - sz + 1]);
			sz--;
		}
	}
	else if (sz % 3 == 1)
		ft_print_unit(str[i - sz]);
	sz--;
	if (sz % 3 == 0)
		ft_print_mult(block);
	return (sz);
}

void	ft_print(char *str)
{
	int		i;
	int		block;
	int		size;

	size = ft_strlen(str);
	i = size;
	block = size / 3;
	while (block >= 0 && i - size <= i)
	{
		size = ft_print_too_long(str, size, block, i);
		if (size % 3 == 0)
			block--;
	}
}
