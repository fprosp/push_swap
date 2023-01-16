/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:07:52 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 22:28:00 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	sa(t_data *nome, int i)
{
	int	tmp;

	tmp = nome->a[0];
	nome->a[0] = nome->a[1];
	nome->a[1] = tmp;
	if (i == 1)
		ft_printf("sa\n");
	return ;
}

void	sb(t_data *nome, int i)
{
	int	tmp;

	tmp = nome->b[0];
	nome->b[0] = nome->b[1];
	nome->b[1] = tmp;
	if (i == 1)
		ft_printf("sb\n");
	return ;
}

void	ss(t_data *nome, int i)
{
	sa(nome, 0);
	sb(nome, 0);
	if (i == 1)
		ft_printf("ss\n");
	return ;
}
