/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:19:04 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 18:24:08 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	send_dec(t_dict *tab, char c)
{
	if (c == '2')
		ft_print_str(tab, "20");
	else if (c == '3')
		ft_print_str(tab, "30");
	else if (c == '4')
		ft_print_str(tab, "40");
	else if (c == '5')
		ft_print_str(tab, "50");
	else if (c == '6')
		ft_print_str(tab, "60");
	else if (c == '7')
		ft_print_str(tab, "70");
	else if (c == '8')
		ft_print_str(tab, "80");
	else if (c == '9')
		ft_print_str(tab, "90");
}

void	send_teen(t_dict *tab, char c)
{
	if (c == '0')
		ft_print_str(tab, "10");
	else if (c == '1')
		ft_print_str(tab, "11");
	else if (c == '2')
		ft_print_str(tab, "12");
	else if (c == '3')
		ft_print_str(tab, "13");
	else if (c == '4')
		ft_print_str(tab, "14");
	else if (c == '5')
		ft_print_str(tab, "15");
	else if (c == '6')
		ft_print_str(tab, "16");
	else if (c == '7')
		ft_print_str(tab, "17");
	else if (c == '8')
		ft_print_str(tab, "18");
	else if (c == '9')
		ft_print_str(tab, "19");
}
