/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:12:29 by rmorel            #+#    #+#             */
/*   Updated: 2021/08/22 18:22:26 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_belong_charset(char c, char *charset);
int		ft_size(char *str, char *charset);
int		ft_word_count(char *str, char *charset);
void	ft_strncpy(char *str, char *dest, int n);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**dest;

	i = 0;
	j = 0;
	dest = malloc(sizeof(*dest) * (ft_word_count(str, charset) + 1));
	if (!dest)
		return (0);
	while (str[i])
	{
		while (ft_belong_charset(str[i], charset) && str[i])
			i++;
		if (!ft_belong_charset(str[i], charset) && str[i])
		{
			dest[j] = malloc(sizeof(char) * (ft_size(&str[i], charset) + 1));
			ft_strncpy(&str[i], &dest[j][0], ft_size(&str[i], charset));
		}
		while (!ft_belong_charset(str[i], charset) && str[i])
			i++;
		j++;
	}
	dest[ft_word_count(str, charset)] = 0;
	return (dest);
}

int	ft_belong_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_size(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_belong_charset(str[i], charset))
		i++;
	return (i);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_belong_charset(str[i], charset) && str[i])
			i++;
		if (!ft_belong_charset(str[i], charset) && str[i])
		{
			while (!ft_belong_charset(str[i], charset) && str[i])
				i++;
			count++;
		}
	}
	return (count);
}

void	ft_strncpy(char *str, char *dest, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}
