/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:04:35 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/22 23:31:42 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_size_dict(char *path_dict)
{
	int		ret;
	char	buff_dict[BUFF_SIZE];
	int		fd;
	int		count;

	count = 0;
	fd = open (path_dict, O_RDONLY);
	if (fd == -1)
		return (error());
	while (1)
	{
		ret = read(fd, buff_dict, BUFF_SIZE);
		if (ret > 0)
			count = count + ret;
		else
			break ;
	}
	fd = close(fd);
	return (count);
}

char	*ft_put_dict_on_str(char *path_dict)
{
	int		ret;
	char	*str_dict;
	int		fd;
	int		cl;

	str_dict = malloc(sizeof(char) * (ft_size_dict(path_dict) + 1));
	if (!str_dict)
		return (0);
	fd = open (path_dict, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = read(fd, str_dict, (ft_size_dict(path_dict) + 1));
	str_dict[ret] = '\0';
	cl = close (fd);
	return (str_dict);
}

char	**ft_init_tab_dict(char *path_dict)
{
	char	*str_dict;
	char	**tab_dict;

	str_dict = ft_put_dict_on_str(path_dict);
	if (str_dict == NULL)
		return (0);
	tab_dict = ft_split(str_dict, "\n");
	if (!tab_dict)
		return (0);
	return (tab_dict);
}

char	**ft_init_tab_ref_dict(char *path_ref_dict)
{
	char	*str_ref_dict;
	char	**tab_ref_dict;

	str_ref_dict = ft_put_dict_on_str(path_ref_dict);
	tab_ref_dict = ft_split(str_ref_dict, "\n");
	if (!tab_ref_dict)
		return (0);
	return (tab_ref_dict);
}
