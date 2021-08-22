/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:26:30 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 09:44:52 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_print_too_long(char *str, int sz, int block, t_dict *tab)
{
	if (sz % 3 == 0)
		ft_print_hundred(tab, str[ft_strlen(str) - sz], str);
	if (sz % 3 == 2)
	{
		if (str[ft_strlen(str) - sz] >= '2' && str[ft_strlen(str) - sz] <= '9')
			ft_print_dec(tab, str[ft_strlen(str) - sz], str);
		else
		{
			if (str[ft_strlen(str) - sz] == '1')
				ft_print_teen(tab, str[ft_strlen(str) - sz + 1], str);
			sz--;
		}
	}
	else if (sz % 3 == 1)
		ft_print_unit(tab, str[ft_strlen(str) - sz], str);
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
		size = ft_print_too_long(str, size, block, tab);
		if (size % 3 == 0)
			block--;
	}
}

int	ft_searching(t_dict *tab, char *check, char *str)
{
	unsigned int	i;
	(void) str;

	i = 0;
	while (tab[i].nbr)
	{
		if (ft_strcmp(tab[i].nbr, check) == 0)
		{
			ft_putstr(tab[i].nbr_letters);
			ft_putstr(" ");
			return (1);
		}
		i++;
	}
	ft_putstr("Dict Error\n");
	return (0);
}
