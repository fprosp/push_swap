/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:33:35 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 00:24:06 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	pb(t_data *nome, int i)
{
	nome->dim_b = nome->dim_b + 1;
	rrb(nome, 0);
	nome->b[0] = nome->a[0];
	ra(nome, 0);
	nome->dim_a = nome->dim_a - 1;
	if (i == 1)
		ft_printf("pb\n");
	return ;
}

void	pa(t_data *nome, int i)
{
	nome->dim_a = nome->dim_a + 1;
	rra(nome, 0);
	nome->a[0] = nome->b[0];
	rb(nome, 0);
	nome->dim_b = nome->dim_b - 1;
	if (i == 1)
		ft_printf("pa\n");
	return ;
}
