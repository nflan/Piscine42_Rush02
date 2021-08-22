/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:26:30 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 14:38:41 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_print_too_long(char *str, int sz, int block, t_dict *tab)
{
	if (sz % 3 == 0)
		ft_print_hundred(tab, str[ft_strlen(str) - sz], str, ft_strlen(str) - sz);
	if (sz % 3 == 2)
	{
		if (str[ft_strlen(str) - sz] >= '2' && str[ft_strlen(str) - sz] <= '9')
			ft_print_dec(tab, str[ft_strlen(str) - sz], str, ft_strlen(str) - sz);
		if (str[ft_strlen(str) - sz] == '1')
		{
			ft_print_teen(tab, str[ft_strlen(str) - sz + 1], str, ft_strlen(str) - sz);
			ft_zero_ending(str, ft_strlen(str) - sz, block);
			return (sz - 2);
		}
	}
	if (sz % 3 == 1)
		ft_print_unit(tab, str[ft_strlen(str) - sz], str, ft_strlen(str) - sz);
	if (str[ft_strlen(str) - sz] != '0')
		ft_zero_ending(str, ft_strlen(str) - sz, block);
	sz--;
	return (sz);
}

void	ft_print(t_dict *tab, char *str)
{
	int		block;
	int		size;

	size = ft_strlen(str);
	block = size / 3;
	if (block > 0 && size % 3 == 0)
		block = block -1;
	while (size != 0 && ft_strlen(str) - size <= ft_strlen(str))
	{
		if (str[0] == '0' && ft_strlen(str) == 1)
			ft_searching(tab, "0", str, ft_strlen(str) - size);
		size = ft_print_too_long(str, size, block, tab);
		if (size % 3 == 0 && block >= 0 && size != 0)
		{
			if (ft_check_mult(str, ft_strlen(str) - size) != 0)
			{
				ft_print_mult(tab, block, ft_strlen(str) - size, str);
				ft_zero_ending(str, ft_strlen(str) - size, block);
			}
			block--;
		}
	}
}

/*
On cherche l'ecriture en lettre du nombre check
Si pas a la fin, on met un espace
sinon on met un retour a la ligne
*/

int	ft_searching(t_dict *tab, char *check, char *str, int i)
{
	int	j;
	(void) str;
	(void) i;

	j = 0;
	while (tab[j].nbr)
	{
		if (ft_strcmp(tab[j].nbr, check) == 0)
		{
			ft_putstr(tab[j].nbr_letters);
			return (1);
		}
		j++;
	}
	ft_putstr("Dict Error\n");
	return (0);
}

void ft_zero_ending(char *str, int i, int block)
{
	int space;
	int	j;

	j = i;
	space = 0;
	while (str[i])
	{
		if (str[i + 1] != '0' && str[i] != 0)
			space = 1;
		i++;
	}
	if ((str[j] && str[j] != '0') || block != 0)
	{
		if (space == 1)
			ft_putstr(" ");
	}
	else
		ft_putstr("\n");
}

int	ft_check_mult(char *str, int i)
{
	if (str[i - 2] == '0' && str[i - 1] == '0' && str[i] == '0')
		return (0);
	return (1);
}
