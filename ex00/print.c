/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:04:08 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 23:23:24 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_print(char *str, t_dict *tab)
{
	char	*dest;
	char	*str_no_zero;

	str_no_zero = ft_str_zero_trimmed(str);
	if (!str_no_zero)
		return (0);
	dest = ft_str_with_zero(str_no_zero);
	if (!dest)
		return (0);
	free(str_no_zero);
	if (dest[0] == '\0')
	{
		ft_print_one_nb(tab, '0');
		return (1);
	}
	if (ft_max_struct(tab, dest) && ft_print_dest(dest, tab))
	{
		free(dest);
		return (1);
	}
	else
		return (dict_error());
}

int	ft_print_dest(char *dest, t_dict *tab)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		if (i != 0 && !(dest[i] == '0' && dest[i + 1] == '0'
				&& dest[i + 2] == '0'))
			write (1, " ", 1);
		if (!ft_print_three_nb(tab, &dest[i]))
			return (0);
		if (ft_strlen(dest) - i > 3)
			if (!(dest[i] == '0' && dest[i + 1] == '0' && dest[i + 2] == '0'))
				if (!ft_print_suffix(&dest[i], tab))
					return (0);
		i += 3;
	}
	write (1, "\n", 1);
	return (1);
}
