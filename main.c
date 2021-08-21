/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:22:03 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 17:48:40 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_rush02.h"
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_decimal(int nbr);
void	ft_print(char *str);

/*int	main(int ac, char **av)
{
//	t_dict *tab;
	int i = 123;
	int j, k, l;

	if (ac < 2 || ac > 3)
		return (0);
	if (ac == 2)
	{
		if (av[1][0] == '-')
			ft_putstr("Error\n");
	//	t_dict = open("numbers.dict", O_RDONLY);
	}
	if (ac == 3)
	{
		if (av[2][0] == '-')
			ft_putstr("Error\n");
	//	t_dict = open(av[1], O_RDONLY);
	}
	ft_putstr(av[1]);
	return (0);
}*/



int	main(void)
{
	char	*str = "1212567891234567891234567891234567812";
	
	ft_print(str);
	return (0);
}
