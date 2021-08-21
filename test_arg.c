/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:25:23 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/21 16:41:57 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_test_arg(int ac, char **av)
{
	if (ac < 2 || ac > 3)
		return (0);
	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0)
			ft_putstr("Error\n");
	}
	if (ac == 3)
	{
		if (ft_atoi(av[2]) < 0)
			ft_putstr("Error\n");
	}
	return (0);
}
