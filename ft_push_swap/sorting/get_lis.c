/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lis.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:04:45 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 23:12:11 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

int	*get_final_arr(t_data *nome)
{
	int	i;
	int	*final_lis;

	nome->lis_len = nome->best_len;
	final_lis = malloc(sizeof(int) * (nome->lis_len));
	if (!final_lis)
	{	
		free_all_lis(nome);
		return (0);
	}
	i = 0;
	while (i < nome->lis_len)
	{
		final_lis[i] = nome->arr_best[i];
		i++;
	}
	free(nome->arr_tmp);
	free(nome->arr_best);
	return (final_lis);
}

void	re_cpy(t_data *nome)
{
	int	i;

	i = 0;
	while (i < nome->i_len)
	{
		nome->arr_best[i] = nome->arr_tmp[i];
		i++;
	}
	nome->best_len = nome->i_len;
	return ;
}

void	check_back(t_data *nome, int i, int k)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (nome->arr_tmp[k] < nome->a[j])
		{
			nome->arr_tmp[k + 1] = nome->a[j];
			nome->i_len++;
			k++;
		}
		j++;
	}
	return ;
}

void	check_on(t_data *nome, int i)
{
	int	k;
	int	j;

	k = 0;
	j = i + 1;
	while (j < nome->dim_a)
	{
		if (nome->arr_tmp[k] < nome->a[j])
		{
			nome->arr_tmp[k + 1] = nome->a[j];
			nome->i_len++;
			k++;
		}
		j++;
	}
	if (i > 0)
		check_back(nome, i, k);
	return ;
}

int	*get_lis(t_data *nome)
{
	int	i;

	if (get_free_lis_memory(nome) == 0)
		return (0);
	nome->best_len = 0;
	i = 0;
	while (i < nome->dim_a)
	{
		nome->i_len = 1;
		nome->arr_tmp[0] = nome->a[i];
		check_on(nome, i);
		if (nome->best_len < nome->i_len)
			re_cpy(nome);
		i++;
	}
	return (get_final_arr(nome));
}
