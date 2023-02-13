/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:28:37 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 02:14:51 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	ra(t_data *nome, int i)
{
	int	j;
	int	tmp;

	if (nome->dim_a == 2)
		sa(nome, 0);
	else
	{
		tmp = nome->a[0];
		j = 0;
		while (j <= nome->dim_a - 2)
		{
			nome->a[j] = nome->a[j + 1];
			j++;
		}
		nome->a[nome->dim_a - 1] = tmp;
	}
	if (i == 1)
		ft_printf("ra\n");
	return ;
}

void	rb(t_data *nome, int i)
{
	int	j;
	int	tmp;

	if (nome->dim_b == 2)
		sb(nome, 0);
	else
	{
		tmp = nome->b[0];
		j = 1;
		while (j < nome->dim_b)
		{
			nome->b[j - 1] = nome->b[j];
			j++;
		}
		nome->b[nome->dim_b - 1] = tmp;
	}
	if (i == 1)
		ft_printf("rb\n");
	return ;
}

void	rr(t_data *nome, int i)
{
	ra(nome, 0);
	rb(nome, 0);
	if (i == 1)
		ft_printf("rr\n");
	return ;
}
