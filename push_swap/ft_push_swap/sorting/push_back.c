/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:32:45 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 23:30:43 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	doub_action(t_data *nome)
{
	if (nome->best_mvs[1] != 0 && nome->best_mvs[2] != 0)
		act_1(nome);
	else if (nome->best_mvs[3] != 0 && nome->best_mvs[4] != 0)
		act_2(nome);
	pa(nome, 1);
	return ;
}

void	mvs_exe(t_data *nome)
{
	if (nome->best_mvs[1] != 0 && nome->best_mvs[2] == 0
		&& nome->best_mvs[3] == 0 && nome->best_mvs[4] == 0)
		exe_1(nome);
	else if (nome->best_mvs[1] == 0 && nome->best_mvs[2] != 0
		&& nome->best_mvs[3] == 0 && nome->best_mvs[4] == 0)
		exe_2(nome);
	else if (nome->best_mvs[1] == 0 && nome->best_mvs[2] == 0
		&& nome->best_mvs[3] != 0 && nome->best_mvs[4] == 0)
		exe_3(nome);
	else if (nome->best_mvs[1] == 0 && nome->best_mvs[2] == 0
		&& nome->best_mvs[3] == 0 && nome->best_mvs[4] != 0)
		exe_4(nome);
	else if (nome->best_mvs[2] != 0 && nome->best_mvs[3] != 0)
	{
		exe_2(nome);
		exe_3(nome);
	}
	else if (nome->best_mvs[1] != 0 && nome->best_mvs[4] != 0)
	{
		exe_1(nome);
		exe_4(nome);
	}
	doub_action(nome);
	return ;
}

void	re_cpy_mvs(t_data *nome)
{
	int	i;

	ft_bzero(nome->best_mvs, 6);
	i = 0;
	while (i < 6)
	{
		nome->best_mvs[i] = nome->mvs_store[i];
		i++;
	}
	return ;
}

void	mvs_stocker(t_data *nome, int i)
{
	nome->mvs_store[0] = i;
	nome->mvs_store[1] = find_ra(nome, i);
	nome->mvs_store[2] = find_rb(nome, i);
	nome->mvs_store[3] = find_rra(nome, i);
	nome->mvs_store[4] = find_rrb(nome, i);
	nome->mvs_store[5] = get_tot_mvs(nome);
	return ;
}

void	push_back(t_data *nome)
{
	int	i;

	nome->max_a = max_val(nome->a, nome->dim_a);
	nome->min_a = min_val(nome->a, nome->dim_a);
	i = 0;
	while (i < nome->dim_b)
	{
		ft_bzero(nome->mvs_store, 6);
		mvs_stocker(nome, i);
		if (i == 0)
		{
			re_cpy_mvs(nome);
			if (nome->best_mvs[5] == 0)
			{
				pa(nome, 1);
				return ;
			}
		}
		else if (nome->mvs_store [5] < nome->best_mvs[5])
			re_cpy_mvs(nome);
		i++;
	}
	mvs_exe(nome);
	return ;
}
