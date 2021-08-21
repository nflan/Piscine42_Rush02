/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:15:08 by nflan             #+#    #+#             */
/*   Updated: 2021/08/21 23:40:52 by nflan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H

#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct s_dict
{
	char	*nbr;
	char	*nbr_letters;
}	t_dict;

//tool.c :
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
//ft_split.c :
char	**ft_split(char *str, char *charset);
int		ft_belong_charset(char c, char *charset);
int		ft_size(char *str, char *charset);
int		ft_word_count(char *str, char *charset);
void	ft_strncpy(char *str, char *dest, int n);
//init_tab_dict.c :
int		ft_size_dict(char *path_dic);
char	*ft_put_dict_on_str(char *path_dic);
char	**ft_init_tab_dict(char *path_dict);
char	**ft_init_tab_ref_dict(char *path_ref_dict);
//parsing_tools.c
int		ft_is_printable(char c);
int		ft_line_valid(char *str);
int		ft_line_dict(char *path_dict);
//struct_dict.c
t_dict	*ft_struct_dict(char **tab_dict, char *path_dict);
char	*ft_find_nb(char *str);
char	*ft_find_char_nb(char *s);
//main.c
void	ft_show_tab(t_dict *par);
//ft_check_all.c
void	ft_print_unit(t_dict *tab, char c, char *str);
void	ft_print_teen(t_dict *tab, char b, char *str);
void	ft_print_dec(t_dict *tab, char c, char *str);
void	ft_print_hundred(t_dict *tab, char c, char *str);
void	ft_print_mult(t_dict *tab, int block, char *str);
//ft_print.c
void	ft_print(t_dict *tab, char *str);
int		ft_print_too_long(char *str, int sz, int block, int i, t_dict *tab);
int		ft_searching(t_dict *tab, char *check, char *str);

#endif
