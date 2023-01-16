/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:10:52 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 01:51:11 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	restore_order(t_data *nome)
{
	int	i;
	int	min_a;

	min_a = min_val(nome->a, nome->dim_a);
	i = num_chr(nome, min_a);
	if (i > nome->dim_a / 2)
		while (nome->a[0] != min_a)
			rra(nome, 1);
	else
		while (nome->a[0] != min_a)
			ra(nome, 1);
	return ;
}

void	push_away(t_data *nome)
{
	int	j;
	int	k;

	k = 0;
	while (k < (nome->nargc - 1 - nome->lis_len))
	{
		j = 0;
		while (j < nome->lis_len)
		{
			if (nome->arr_lis[j] == nome->a[0])
			{
				ra(nome, 1);
				j = -1;
				break ;
			}
			j++;
		}
		if (j != -1)
		{
			pb(nome, 1);
			k++;
		}
	}
	return ;
}

void	order_ops(t_data *nome)
{
	if (get_mem(nome) == 0)
		return ;
	if (nome->dim_a < 6)
		sort_short(nome);
	else
	{
		nome->arr_lis = get_lis(nome);
		if (!nome->arr_lis)
			return ;
		push_away(nome);
		free(nome->arr_lis);
		while (nome->dim_b > 0)
			push_back(nome);
	}
	free_helper(nome);
	restore_order(nome);
	free_a_b(nome);
	return ;
}
