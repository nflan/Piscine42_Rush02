/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:43:59 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 19:45:05 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tools.h"

int	ft_searching(t_dict *tab, char *str);

void	ft_print_mult(t_dict *tab, int block, char *str)
{
	if (block == 12)
		ft_searching(tab, "1000000000000000000000000000000000000", str);
	else if (block == 11)
		ft_searching(tab, "1000000000000000000000000000000000", str);
	else if (block == 10)
		ft_searching(tab, "1000000000000000000000000000000", str);
	else if (block == 9)
		ft_searching(tab, "1000000000000000000000000000", str);
	else if (block == 8)
		ft_searching(tab, "1000000000000000000000000", str);
	else if (block == 7)
		ft_searching(tab, "1000000000000000000000", str);
	else if (block == 6)
		ft_searching(tab, "1000000000000000000", str);
	else if (block == 5)
		ft_searching(tab, "1000000000000000", str);
	else if (block == 4)
		ft_searching(tab, "1000000000000", str);
	else if (block == 3)
		ft_searching(tab, "1000000000", str);
	else if (block == 2)
		ft_searching(tab, "1000000", str);
	else if (block == 1)
		ft_searching(tab, "1000", str);
}

void	ft_print_hundred(t_dict *tab, char c, char *str)
{
	if (c == '1')
		ft_searching(tab, "100", str);
	else if (c == '2')
		ft_searching(tab, "200", str);
	else if (c == '3')
		ft_searching(tab, "300", str);
	else if (c == '4')
		ft_searching(tab, "400", str);
	else if (c == '5')
		ft_searching(tab, "500", str);
	else if (c == '6')
		ft_searching(tab, "600", str);
	else if (c == '7')
		ft_searching(tab, "700", str);
	else if (c == '8')
		ft_searching(tab, "800", str);
	else if (c == '9')
		ft_searching(tab, "900", str);
}

void	ft_print_dec(t_dict *tab, char c, char *str)
{
	if (c == '2')
		ft_searching(tab, "20", str);
	else if (c == '3')
		ft_searching(tab, "30", str);
	else if (c == '4')
		ft_searching(tab, "40", str);
	else if (c == '5')
		ft_searching(tab, "50", str);
	else if (c == '6')
		ft_searching(tab, "60", str);
	else if (c == '7')
		ft_searching(tab, "70", str);
	else if (c == '8')
		ft_searching(tab, "80", str);
	else if (c == '9')
		ft_searching(tab, "90", str);
}

void	ft_print_teen(t_dict *tab, char b, char *str)
{
	if (b == '0')
		ft_searching(tab, "10", str);
	else if (b == '1')
		ft_searching(tab, "11", str);
	else if (b == '2')
		ft_searching(tab, "12", str);
	else if (b == '3')
		ft_searching(tab, "13", str);
	else if (b == '4')
		ft_searching(tab, "14", str);
	else if (b == '5')
		ft_searching(tab, "15", str);
	else if (b == '6')
		ft_searching(tab, "16", str);
	else if (b == '7')
		ft_searching(tab, "17", str);
	else if (b == '8')
		ft_searching(tab, "18", str);
	else if (b == '9')
		ft_searching(tab, "19", str);
}

void	ft_print_unit(t_dict *tab, char c, char *str)
{
	if (c == '1')
		ft_searching(tab, "1", str);
	else if (c == '2')
		ft_searching(tab, "2", str);
	else if (c == '3')
		ft_searching(tab, "3", str);
	else if (c == '4')
		ft_searching(tab, "4", str);
	else if (c == '5')
		ft_searching(tab, "5", str);
	else if (c == '6')
		ft_searching(tab, "6", str);
	else if (c == '7')
		ft_searching(tab, "7", str);
	else if (c == '8')
		ft_searching(tab, "8", str);
	else if (c == '9')
		ft_searching(tab, "9", str);
}
