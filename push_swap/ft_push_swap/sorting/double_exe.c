/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_exe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:03:05 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 23:13:06 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	act_2(t_data *nome)
{
	while (nome->best_mvs[3] != 0 && nome->best_mvs[4] != 0)
	{
		rrr(nome, 1);
		nome->best_mvs[3]--;
		nome->best_mvs[4]--;
	}
	if (nome->best_mvs[3] != 0)
		exe_3(nome);
	if (nome->best_mvs[4] != 0)
		exe_4(nome);
	return ;
}

void	act_1(t_data *nome)
{
	while (nome->best_mvs[1] != 0 && nome->best_mvs[2] != 0)
	{
		rr(nome, 1);
		nome->best_mvs[1]--;
		nome->best_mvs[2]--;
	}
	if (nome->best_mvs[1] != 0)
		exe_1(nome);
	if (nome->best_mvs[2] != 0)
		exe_2(nome);
	return ;
}
