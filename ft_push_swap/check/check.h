/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:45:06 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 14:39:13 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

# include "../push_swap.h"

struct	s_data;

int		str_char_check(const char *argv);
int		order_check(struct s_data *nome, int *s);
char	dub_check(struct s_data *nome, int *s);
int		num_check(const char *str);
int		num_cpy(struct s_data *nome, int i, const char **argv, int *s);
int		str_cpy(struct s_data *nome, int i, char **argv_tmp, int *s);
int		*conv_argv(struct s_data *nome, const char **argv, int j);
int		*get_a(struct s_data *nome, const char **argv, int j);
int		*get_b(struct s_data *nome);

#endif