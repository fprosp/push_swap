/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:22:12 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 02:06:33 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rra(t_data *nome, int i)
{
	int	j;
	int	tmp;

	if (nome->dim_a == 2)
		sa(nome, 0);
	else
	{
		tmp = nome->a[nome->dim_a - 1];
		j = nome->dim_a - 1;
		while (j > 0)
		{
			nome->a[j] = nome->a[j - 1];
			j--;
		}
		nome->a[0] = tmp;
	}
	if (i == 1)
		ft_printf("rra\n");
	return ;
}

void	rrb(t_data *nome, int i)
{
	int	j;
	int	tmp;

	if (nome->dim_b == 2)
		sb(nome, 0);
	else
	{
		tmp = nome->b[nome->dim_b - 1];
		j = nome->dim_b - 1;
		while (j > 0)
		{
			nome->b[j] = nome->b[j - 1];
			j--;
		}
		nome->b[0] = tmp;
	}
	if (i == 1)
		ft_printf("rrb\n");
	return ;
}

void	rrr(t_data *nome, int i)
{
	rra(nome, 0);
	rrb(nome, 0);
	if (i == 1)
		ft_printf("rrr\n");
	return ;
}
