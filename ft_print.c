/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:26:30 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 22:51:04 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_print_too_long(char *str, int sz, int block, int i, t_dict *tab)
{
	if (sz % 3 == 0)
		ft_print_hundred(tab, str[i - sz], str);
	if (sz % 3 == 2)
	{
		if (str[i - sz] >= '2' && str[i - sz] <= '9')
			ft_print_dec(tab, str[i - sz], str);
		else
		{
			if (str[i - sz] == '1')
				ft_print_teen(tab, str[i - sz + 1], str);
			sz--;
		}
	}
	else if (sz % 3 == 1)
		ft_print_unit(tab, str[i - sz], str);
	sz--;
	if (sz % 3 == 0)
		ft_print_mult(tab, block, str);
	return (sz);
}

void	ft_print(t_dict *tab, char *str)
{
	int		i;
	int		block;
	int		size;

	size = ft_strlen(str);
	i = size;
	block = size / 3;
	while (block >= 0 && i - size <= i)
	{
		size = ft_print_too_long(str, size, block, i, tab);
		if (size % 3 == 0)
			block--;
	}
}
