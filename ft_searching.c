/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searching.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:59:00 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 19:17:00 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_searching(t_dict *tab, char *str)
{
	unsigned int	i;

	i = 0;
	while (tab[i].nbr)
	{
		if (tab[i].nbr == str)
		{
			ft_putstr(tab[i].value);
			return (1);
		}
		i++;
	}
	ft_putstr("Dict Error\n");
	return (0);
}
