/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searching.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:59:00 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 23:34:29 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_searching(t_dict *tab, char *check, char *str)
{
	unsigned int	i;

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
