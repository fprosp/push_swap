/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:42:57 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 02:15:21 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	sort_three(t_data *nome)
{
	if (nome->a[2] > nome->a[0] && nome->a[0] > nome->a[1])
		sa(nome, 1);
	else if (nome->a[0] > nome->a[1] && nome->a[1] > nome->a[2])
	{
		sa(nome, 1);
		rra(nome, 1);
	}
	else if (nome->a[0] > nome->a[2] && nome->a[2] > nome->a[1])
		ra(nome, 1);
	else if (nome->a[1] > nome->a[2] && nome->a[2] > nome->a[0])
	{
		sa(nome, 1);
		ra(nome, 1);
	}
	else if (nome->a[1] > nome->a[0] && nome->a[0] > nome->a[2])
		rra(nome, 1);
	return ;
}

void	sort_under_six(t_data *nome)
{
	pb(nome, 1);
	pb(nome, 1);
	sort_three(nome);
	while (nome->dim_b > 0)
		push_back(nome);
	return ;
}

void	sort_short(t_data *nome)
{
	if (nome->dim_a == 2 && nome->a[0] > nome->a[1])
		sa(nome, 1);
	else if (nome->dim_a == 3)
		sort_three(nome);
	else if (nome->dim_a <= 5)
		sort_under_six(nome);
	return ;
}
