/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:18:52 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 18:28:53 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/*ft_check_dict compare toutes les entrees du dict_ref et verifie si elles
  se trouvent bien dans le dict en annexe*/
int	ft_check_all_entry(char *dict_str, t_dict *struct_dict)
{
	(void)	dict_str;
	int		i;
	char	*path_ref_dict;
	char	**tab_ref;

	path_ref_dict = "ref.dict.txt";
	tab_ref = ft_init_tab_ref_dict(path_ref_dict);
	i = 0;
	while (tab_ref[i])
	{
		if (!ft_check_one_entry(tab_ref[i], struct_dict))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_one_entry(char *tab_ref, t_dict *struct_dict)
{
	int	j;

	j = 0;
	while (struct_dict[j].nbr)
	{
		if (ft_compare_dict_str(tab_ref, struct_dict[j]))
			return (1);
		j++;
	}
	return (0);
}

int	ft_compare_dict_str(char *dict_str, t_dict struct_dict)
{
	int	i;

	i = 0;
	while (dict_str[i] && struct_dict.nbr[i]
			&& dict_str[i] == struct_dict.nbr[i])
		i++;
	if ((dict_str[i] == ' ' || dict_str[i] == ':')
			&& struct_dict.nbr[i] == '\0')
		return (1);
	else
		return (0);
}

int	ft_check_double(t_dict *struct_dict)
{
	int	i;
	int	j;

	i = 0;
	while (struct_dict[i].nbr)
	{
		j = i + 1;
		while (struct_dict[j].nbr)
		{
			if (ft_strcmp(struct_dict[i].nbr, struct_dict[j].nbr) == 0)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
