/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:22:03 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 15:04:05 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);


#include <stdio.h>
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

int	main()
{
	char *str = "1234567891234567891234567891234567891";
	int j, k, l, i;
	int	size;
	int block;
	int first_block;

	size = ft_strlen(str);
	printf("size = %d\n", size);
	block = size / 3;
	first_block = size % 3;
	printf("block = %d\n", block);
	printf("First block = %d\n", first_block);
	while (block >= 0)
	{
		if (size % 3 == 0)
		{
		}
		if (size % 3 == 2)
		{
		}
		if (size % 3 == 1)
		{
		}
		size--;
		if (size % 3 == 0)
		{
			afficher "million ou autre"
			block--;
		}
	}
/*	j = i % 1000;
	k = i % 100;
	l = i % 10;
	printf("j = %d\nk = %d\nl = %d\n", j, k, l);
	i = i / 1000;
	j = i % 1000;
	k = i % 100;
	l = i % 10;
	printf("j = %d\nk = %d\nl = %d\n", j, k, l);
*/	return (0);
}
