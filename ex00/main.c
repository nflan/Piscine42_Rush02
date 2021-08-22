/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:22:03 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 17:22:12 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int    main(int ac, char **av)
{
    if (ac < 2 || ac > 3)
        return (0);
    else if (ac == 2)
	{
        if (!ft_main_1_arg(av))
			return (0);
	}
    else
	{
        if (!ft_main_2_arg(av))
			return (0);
	}
    return (0);
}

int    ft_main_1_arg(char **av)
{
    t_dict *struct_dict;
    char *path_dict = "numbers.dict.txt";
    char **tab_dict;

    tab_dict = ft_init_tab_dict(path_dict);
    if (!tab_dict)
        return (0);
    struct_dict = ft_struct_dict(tab_dict, path_dict);
    if (!struct_dict)
        return (0);
   /* if (!ft_check_dict(struct_dict))
    {
        ft_putstr("Error\n");
        return (0);
    }*/
    if (!ft_print(av[1], struct_dict))
		return (0);
	return (1);
}

int ft_main_2_arg(char **av)
{
    t_dict *struct_dict;
    char *path_dict = "numbers.dict.txt";
    char **tab_dict;

    tab_dict = ft_init_tab_dict(av[1]);
    if (!tab_dict)
        return (0);
    struct_dict = ft_struct_dict(tab_dict, path_dict);
   /* if (!ft_check_dict(struct_dict))
    {
        ft_putstr("Error\n");
        return (0);
    }*/
    if (!ft_print(av[2], struct_dict))
		return (0);
	return (1);
}
