/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:21:34 by nflan             #+#    #+#             */
/*   Updated: 2021/08/22 23:31:43 by rmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 20

typedef struct s_dict
{
	char	*nbr;
	char	*nbr_letters;
}	t_dict;

//main.c :
int		ft_main_1_arg(char **av);
int		ft_main_2_arg(char **av);
//tool.c :
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
//ft_checks.c :
int		check_parameter(char *str);
int		error(void);
int		dict_error(void);
int		ft_max_struct(t_dict *struct_dict, char *dest);
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
//parsing_tools.c :
int		ft_is_printable(char c);
int		ft_line_valid(char *str);
int		ft_line_dict(char *path_dict);
//struct_dict.c :
t_dict	*ft_struct_dict(char **tab_dict, char *path_dict);
char	*ft_find_nb(char *str);
char	*ft_find_char_nb(char *s);
char	*ft_trim_end_space(char *str);
//print_three.c :
int		ft_print_three_nb(t_dict *tab, char *str);
int		ft_print_one_nb(t_dict *tab, char c);
int		ft_print_str(t_dict *tab, char *str);
void	ft_zero_ending(char *str, int i);
//print_tools.c :
char	*ft_create_key_suffix(char *dest);
int		ft_print_suffix(char *dest, t_dict *tab);
void	ft_fill_dest(char *dest, char *str, int size);
char	*ft_str_with_zero(char *str);
char	*ft_str_zero_trimmed(char *str);
//print.c :
int		ft_print_dest(char *dest, t_dict *tab);
int		ft_print(char *str, t_dict *tab);
//dec_numbers.c :
void	send_dec(t_dict *tab, char c);
void	send_teen(t_dict *tab, char c);
//check_dict.c :
int		ft_check_double(t_dict *struct_dict);
int		ft_compare_dict_str(char *dict_str, t_dict struct_dict);
int		ft_check_one_entry(char *tab_ref, t_dict *struct_dict);
int		ft_check_all_entry(t_dict *struct_dict);

#endif
