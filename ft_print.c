/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:26:30 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 17:47:35 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <libc.h>
void	ft_putstr(char *str);
int		ft_strlen(char *str);

void	ft_print_mult(int block)
{
	if (block == 12)
		ft_putstr("undecillion ");
	else if (block == 11)
		ft_putstr("decillion ");
	else if (block == 10)
		ft_putstr("nonillion ");
	else if (block == 9)
		ft_putstr("octillion ");
	else if (block == 8)
		ft_putstr("septillion ");
	else if (block == 7)
		ft_putstr("sextillion ");
	else if (block == 6)
		ft_putstr("quintillion ");
	else if (block == 5)
		ft_putstr("quadrillion ");
	else if (block == 4)
		ft_putstr("trillion ");
	else if (block == 3)
		ft_putstr("billion ");
	else if (block == 2)
		ft_putstr("million ");
	else if (block == 1)
		ft_putstr("thousand ");
}

void	ft_print_hundred(char c)
{
	if (c == '1')
		ft_putstr("one hundred ");
	else if (c == '2')
		ft_putstr("two hundred ");
	else if (c == '3')
		ft_putstr("three hundred ");
	else if (c == '4')
		ft_putstr("four hundred ");
	else if (c == '5')
		ft_putstr("five hundred ");
	else if (c == '6')
		ft_putstr("six hundred ");
	else if (c == '7')
		ft_putstr("seven hundred ");
	else if (c == '8')
		ft_putstr("height hundred ");
	else if (c == '9')
		ft_putstr("nine hundred ");
}

void	ft_print_dec(char c)
{
	if (c == '2')
		ft_putstr("twenty ");
	else if (c == '3')
		ft_putstr("thirty ");
	else if (c == '4')
		ft_putstr("fourty ");
	else if (c == '5')
		ft_putstr("fifty ");
	else if (c == '6')
		ft_putstr("sixty ");
	else if (c == '7')
		ft_putstr("seventy ");
	else if (c == '8')
		ft_putstr("heighty ");
	else if (c == '9')
		ft_putstr("ninety ");
}

void	ft_print_teen(char b)
{
	if (b == '0')
		ft_putstr("ten ");
	else if (b == '1')
		ft_putstr("eleven ");
	else if (b == '2')
		ft_putstr("twelve ");
	else if (b == '3')
		ft_putstr("thirteen ");
	else if (b == '4')
		ft_putstr("fourteen ");
	else if (b == '5')
		ft_putstr("fifteen ");
	else if (b == '6')
		ft_putstr("sixteen ");
	else if (b == '7')
		ft_putstr("seventeen ");
	else if (b == '8')
		ft_putstr("heighteen ");
	else if (b == '9')
		ft_putstr("nineteen ");
}

void	ft_print_unit(char c)
{
	if (c == '0')
		ft_putstr("zero ");
	else if (c == '1')
		ft_putstr("one ");
	else if (c == '2')
		ft_putstr("two ");
	else if (c == '3')
		ft_putstr("three ");
	else if (c == '4')
		ft_putstr("four ");
	else if (c == '5')
		ft_putstr("five ");
	else if (c == '6')
		ft_putstr("six ");
	else if (c == '7')
		ft_putstr("seven ");
	else if (c == '8')
		ft_putstr("height ");
	else if (c == '9')
		ft_putstr("nine ");
}

int	ft_print_too_long(char *str, int sz, int block, int i)
{
	if (sz % 3 == 0)
		ft_print_hundred(str[i - sz]);
	if (sz % 3 == 2)
	{
		if (str[i - sz] >= '2' && str[i - sz] <= '9')
			ft_print_dec(str[i - sz]);
		else
		{
			if (str[i - sz] == '1')
				ft_print_teen(str[i - sz + 1]);
			sz--;
		}
	}
	else if (sz % 3 == 1)
		ft_print_unit(str[i - sz]);
	sz--;
	if (sz % 3 == 0)
		ft_print_mult(block);
	return (sz);
}

void	ft_print(char *str)
{
	int		i;
	int		block;
	int		size;

	size = ft_strlen(str);
	i = size;
	block = size / 3;
	while (block >= 0 && i - size <= i)
	{
		size = ft_print_too_long(str, size, block, i);
		if (size % 3 == 0)
			block--;
	}
}
