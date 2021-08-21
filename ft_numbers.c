/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:39:03 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 11:11:07 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int ft_decimal(int nbr)
{
	if (nbr >= 90)
		return (90);
	else if (nbr >= 80)
		return (80);
	else if (nbr >= 70)
		return (70);
	else if (nbr >= 60)
		return (60);
	else if (nbr >= 50)
		return (50);
	else if (nbr >= 40)
		return (40);
	else if (nbr >= 30)
		return (30);
	else if (nbr >= 20)
		return (20);
	else if (nbr < 20)
		return (nbr);
	else
		return (0);
}
