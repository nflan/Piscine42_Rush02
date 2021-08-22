/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:43:59 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 13:50:48 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	ft_print_mult(t_dict *tab, int block, int i, char *str)
{
	if (block == 12)
		ft_searching(tab, "1000000000000000000000000000000000000", str, i);
	else if (block == 11)
		ft_searching(tab, "1000000000000000000000000000000000", str, i);
	else if (block == 10)
		ft_searching(tab, "1000000000000000000000000000000", str, i);
	else if (block == 9)
		ft_searching(tab, "1000000000000000000000000000", str, i);
	else if (block == 8)
		ft_searching(tab, "1000000000000000000000000", str, i);
	else if (block == 7)
		ft_searching(tab, "1000000000000000000000", str, i);
	else if (block == 6)
		ft_searching(tab, "1000000000000000000", str, i);
	else if (block == 5)
		ft_searching(tab, "1000000000000000", str, i);
	else if (block == 4)
		ft_searching(tab, "1000000000000", str, i);
	else if (block == 3)
		ft_searching(tab, "1000000000", str, i);
	else if (block == 2)
		ft_searching(tab, "1000000", str, i);
	else if (block == 1)
		ft_searching(tab, "1000", str, i);
}

void	ft_print_hundred(t_dict *tab, char c, char *str, int i)
{
	if (c == '1')
		ft_searching(tab, "1", str, i);
	else if (c == '2')
		ft_searching(tab, "2", str, i);
	else if (c == '3')
		ft_searching(tab, "3", str, i);
	else if (c == '4')
		ft_searching(tab, "4", str, i);
	else if (c == '5')
		ft_searching(tab, "5", str, i);
	else if (c == '6')
		ft_searching(tab, "6", str, i);
	else if (c == '7')
		ft_searching(tab, "7", str, i);
	else if (c == '8')
		ft_searching(tab, "8", str, i);
	else if (c == '9')
		ft_searching(tab, "9", str, i);
	if (c != '0')
	{
		ft_putstr(" ");
		ft_searching(tab, "100", str, i);
	}
}

void	ft_print_dec(t_dict *tab, char c, char *str, int i)
{
	if (c == '2')
		ft_searching(tab, "20", str, i);
	else if (c == '3')
		ft_searching(tab, "30", str, i);
	else if (c == '4')
		ft_searching(tab, "40", str, i);
	else if (c == '5')
		ft_searching(tab, "50", str, i);
	else if (c == '6')
		ft_searching(tab, "60", str, i);
	else if (c == '7')
		ft_searching(tab, "70", str, i);
	else if (c == '8')
		ft_searching(tab, "80", str, i);
	else if (c == '9')
		ft_searching(tab, "90", str, i);
}

void	ft_print_teen(t_dict *tab, char b, char *str, int i)
{
	if (b == '0')
		ft_searching(tab, "10", str, i);
	else if (b == '1')
		ft_searching(tab, "11", str, i);
	else if (b == '2')
		ft_searching(tab, "12", str, i);
	else if (b == '3')
		ft_searching(tab, "13", str, i);
	else if (b == '4')
		ft_searching(tab, "14", str, i);
	else if (b == '5')
		ft_searching(tab, "15", str, i);
	else if (b == '6')
		ft_searching(tab, "16", str, i);
	else if (b == '7')
		ft_searching(tab, "17", str, i);
	else if (b == '8')
		ft_searching(tab, "18", str, i);
	else if (b == '9')
		ft_searching(tab, "19", str, i);
}

void	ft_print_unit(t_dict *tab, char c, char *str, int i)
{
	if (c == '1')
		ft_searching(tab, "1", str, i);
	else if (c == '2')
		ft_searching(tab, "2", str, i);
	else if (c == '3')
		ft_searching(tab, "3", str, i);
	else if (c == '4')
		ft_searching(tab, "4", str, i);
	else if (c == '5')
		ft_searching(tab, "5", str, i);
	else if (c == '6')
		ft_searching(tab, "6", str, i);
	else if (c == '7')
		ft_searching(tab, "7", str, i);
	else if (c == '8')
		ft_searching(tab, "8", str, i);
	else if (c == '9')
		ft_searching(tab, "9", str, i);
}
