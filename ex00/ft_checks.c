/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:20:40 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 23:07:09 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	check_parameter(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	error(void)
{
	ft_putstr("Error\n");
	return (0);
}

int	dict_error(void)
{
	ft_putstr("Dict Error\n");
	return (0);
}

int	ft_max_struct(t_dict *struct_dict, char *dest)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (struct_dict[i].nbr)
	{
		if (max < ft_strlen(struct_dict[i].nbr))
			max = ft_strlen(struct_dict[i].nbr);
		i++;
	}
	if (ft_strlen(dest) > max + 2)
		return (0);
	return (1);
}	
