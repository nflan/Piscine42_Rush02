/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:22:03 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 11:40:26 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int	main(int ac, char **av)
{
	t_dict *tab;

	if (ac < 2 || ac > 3)
		return (0);
	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0)
			ft_putstr("Error\n");
		t_dict = 
	}
	if (ac == 3)
	{
		if (ft_atoi(av[2]) < 0)
			ft_putstr("Error\n");
		t_dict =
	}
	return (0);
}
