/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_a_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:51:09 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 14:42:56 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int	*get_b(t_data *nome)
{
	nome->b = malloc(sizeof(int) * nome->nargc - 1);
	if (!nome->b)
	{
		free(nome->a);
		return (0);
	}
	nome->dim_b = 0;
	return (nome->b);
}

int	multi_str_case(t_data *nome, int i, const char **argv, int *s)
{
	char	**argv_tmp;

	argv_tmp = ft_split(argv[i], ' ');
	if (!argv_tmp)
	{
		free(s);
		return (0);
	}
	nome->npt = nome->npt + nome->npc - 1;
	if ((str_cpy(nome, i, argv_tmp, s)) == 0)
		return (0);
	return (1);
}

int	str_case(t_data *nome, int i, const char **argv, int *s)
{
	nome->npc = (int)np_gen(argv[i], (int) ' ');
	if (nome->npc == 1)
	{
		if (num_cpy(nome, i, argv, s) == 0)
			return (0);
		return (1);
	}
	if (nome->npc > 1)
		if ((multi_str_case(nome, i, argv, s)) == 0)
			return (0);
	return (1);
}

int	*conv_argv(t_data *nome, const char **argv, int j)
{
	int	i;
	int	*s;

	s = malloc(sizeof(int) * (nome->nargc) - 1);
	if (!s)
		return (0);
	nome->npt = 0;
	i = 1;
	while (i <= nome->argc - 1)
	{	
		if (ft_strchr(argv[i], (int) ' ') == 0)
			if (num_cpy(nome, i, argv, s) == 0)
				return (0);
		if (ft_strchr(argv[i], (int) ' ') != 0)
			if (str_case(nome, i, argv, s) == 0)
				return (0);
		i++;
	}
	if (j == 1)
		if (order_check(nome, s) != 0 && dub_check(nome, s) != 0)
			return (s);
	if (j == 0 && dub_check(nome, s) != 0)
		return (s);
	return (0);
}

int	*get_a(t_data *nome, const char **argv, int j)
{
	int	i;

	nome->nargc = nome->argc;
	i = 1;
	while (i <= nome->argc - 1)
	{
		if (str_char_check(argv[i]) == 0)
			return (0);
		if (ft_strchr(argv[i], (int) ' ') != 0)
		{
			if (num_check(argv[i]) == 0)
			{
				write(2, "Error\n", 6);
				return (0);
			}
			if ((int)np_gen(argv[i], (int) ' ') > 1)
				nome->nargc = nome->nargc + (int)np_gen(argv[i], (int) ' ') - 1;
		}
		i++;
	}
	nome->dim_a = nome->nargc - 1;
	if (nome->nargc - 1 > 1)
		return (conv_argv(nome, argv, j));
	return (0);
}
