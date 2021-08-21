/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:22:03 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 23:01:53 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

/*int	main(void)
{
	char *path_dict = "numbers.dict.txt";
	char **tab_dict;
	t_dict	*struct_dict;

	tab_dict = ft_init_tab_dict(path_dict);
	if (!tab_dict)
		return (0);
	struct_dict = ft_struct_dict(tab_dict, path_dict);
	ft_show_tab(struct_dict);
	return (0);
}

void	ft_show_tab(t_dict *par)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		ft_putstr(par[i].nbr);
		write (1, "\n", 1);
		ft_putstr(par[i].nbr_letters);
		write (1, "\n\n", 1);
		i++;
	}
}*/

int	main(int ac, char **av)
{
	t_dict *struct_dict;
	char *path_dict = "number.dict";
	char **tab_dict;

	if (ac < 2 || ac > 3)
		return (0);
	if (ac == 2)
	{
		if (av[1][0] == '-')
			ft_putstr("Error\n");
		tab_dict = ft_init_tab_dict(path_dict);
		if (!tab_dict)
			return (0);
		struct_dict = ft_struct_dict(tab_dict, path_dict);
		ft_print(struct_dict, av[1]);
	}
	if (ac == 3)
	{
		if (av[2][0] == '-')
			ft_putstr("Error\n");
		tab_dict = ft_init_tab_dict(av[1]);
		if (!tab_dict)
			return (0);
		struct_dict = ft_struct_dict(tab_dict, path_dict);
		ft_print(struct_dict, av[2]);
	}
	return (0);
}
