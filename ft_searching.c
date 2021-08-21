/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searching.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:59:00 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 23:20:23 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_searching(t_dict *tab, char *check, char *str)
{
	unsigned int	i;

	i = 0;
	printf("%s\n", tab[12].nbr);
	printf("%s\n", check);
	while (tab[i].nbr)
	{
		if (tab[i].nbr == check)
		{
			ft_putstr(tab[i].nbr_letters);
			return (1);
		}
		i++;
	}
	ft_putstr("Dict Error\n");
	return (0);
}
