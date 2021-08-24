/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:33:27 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/22 23:27:53 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*ft_struct_dict(char **tab_dict, char *path_dict)
{
	t_dict	*struct_dict;
	int		i;
	int		j;

	i = 0;
	j = 0;
	struct_dict = malloc(sizeof(*struct_dict) * (ft_line_dict(path_dict) + 1));
	if (!struct_dict)
		return (0);
	while (tab_dict[i])
	{
		if (ft_line_valid(tab_dict[i]))
		{
			struct_dict[j].nbr = ft_find_nb(tab_dict[i]);
			struct_dict[j].nbr_letters = ft_find_char_nb(tab_dict[i]);
			j++;
		}
		i++;
	}
	struct_dict[j].nbr = 0;
	struct_dict[j].nbr_letters = 0;
	return (struct_dict);
}

char	*ft_find_nb(char *str)
{
	int		i;
	char	*nb;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	nb = malloc(sizeof(char) * (i + 1));
	if (!nb)
		return (0);
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb[i] = str[i];
		i++;
	}
	nb[i] = '\0';
	return (nb);
}

char	*ft_find_char_nb(char *s)
{
	int		i;
	char	*str_trim;

	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32 || s[i] == ':')
		i++;
	str_trim = ft_trim_end_space(&s[i]);
	if (!str_trim)
		return (0);
	return (str_trim);
}

char	*ft_trim_end_space(char *str)
{
	int		i;
	int		stop;
	char	*str_trim;

	i = ft_strlen(str) - 1;
	while (str[i] == ' ')
		i--;
	stop = i + 2;
	str_trim = malloc(sizeof(char) * (stop + 1));
	if (!str_trim)
		return (0);
	i = 0;
	while (i < stop - 1)
	{
		str_trim[i] = str[i];
		i++;
	}
	str_trim[i] = '\0';
	return (str_trim);
}
