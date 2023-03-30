/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_supply.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:51:09 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 23:07:07 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	free_a_b(t_data *nome)
{
	free(nome->a);
	free(nome->b);
	return ;
}

int	get_free_lis_memory(t_data *nome)
{
	nome->arr_best = malloc(sizeof(int) * nome->dim_a);
	if (!nome->arr_best)
	{
		free_a_b(nome);
		return (0);
	}
	nome->arr_tmp = malloc(sizeof(int) * nome->dim_a);
	if (!nome->arr_tmp)
	{
		free_a_b(nome);
		free(nome->arr_best);
		return (0);
	}
	return (1);
}

void	free_all_lis(t_data *nome)
{
	free_a_b(nome);
	free(nome->arr_tmp);
	free(nome->arr_best);
	return ;
}

int	get_mem(t_data *nome)
{
	nome->mvs_store = malloc(sizeof(int) * 6);
	if (!nome->mvs_store)
	{
		free_a_b(nome);
		return (0);
	}
	nome->best_mvs = malloc(sizeof(int) * 6);
	if (!nome->best_mvs)
	{
		free_a_b(nome);
		free(nome->mvs_store);
		return (0);
	}
	return (1);
}

void	free_helper(t_data *nome)
{
	free(nome->mvs_store);
	free(nome->best_mvs);
	return ;
}
