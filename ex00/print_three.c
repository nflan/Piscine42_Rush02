/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:43:16 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 22:44:56 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_print_three_nb(t_dict *tab, char *str)
{
	if (str[0] != '0')
	{
		ft_print_one_nb(tab, str[0]);
		ft_putstr(" ");
		ft_print_str(tab, "100");
		ft_zero_ending(str, 0);
		if (str[1] == '0')
			ft_zero_ending(str, 1);
	}
	if (str[1] >= '2')
	{	
		send_dec(tab, str[1]);
		ft_zero_ending(str, 1);
	}
	if (str[1] == '1')
		send_teen(tab, str[2]);
	if (str[2] != '0' && str[1] != '1')
	{
		ft_print_one_nb(tab, str[2]);
	}
	return (1);
}

int	ft_print_one_nb(t_dict *tab, char c)
{
	int		i;
	char	tmp[2];

	i = 0;
	tmp[0] = c;
	tmp[1] = 0;
	while (tab[i].nbr)
	{
		if (ft_strcmp(tab[i].nbr, tmp) == 0)
		{
			ft_putstr(tab[i].nbr_letters);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_print_str(t_dict *tab, char *str)
{
	int	i;

	i = 0;
	while (tab[i].nbr)
	{
		if (ft_strcmp(tab[i].nbr, str) == 0)
		{
			ft_putstr(tab[i].nbr_letters);
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_zero_ending(char *str, int i)
{
	if (str[i + 1] != '0' && str[i + 1] != '\0')
		ft_putstr(" ");
}
