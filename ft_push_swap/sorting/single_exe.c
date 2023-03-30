/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_exe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:38:42 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 23:09:59 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	exe_4(t_data *nome)
{
	while (nome->best_mvs[4] != 0)
	{
		rrb(nome, 1);
		nome->best_mvs[4]--;
	}
	return ;
}

void	exe_3(t_data *nome)
{
	while (nome->best_mvs[3] != 0)
	{
		rra(nome, 1);
		nome->best_mvs[3]--;
	}
	return ;
}

void	exe_2(t_data *nome)
{
	while (nome->best_mvs[2] != 0)
	{
		rb(nome, 1);
		nome->best_mvs[2]--;
	}
	return ;
}

void	exe_1(t_data *nome)
{
	while (nome->best_mvs[1] != 0)
	{
		ra(nome, 1);
		nome->best_mvs[1]--;
	}
	return ;
}
