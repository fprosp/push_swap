/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tot_mvs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:00:47 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 23:11:31 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

int	get_combinations(t_data *nome)
{
	if (nome->mvs_store[1] != 0 && nome->mvs_store[2] != 0)
	{
		if (nome->mvs_store[1] > nome->mvs_store[2])
			return (nome->mvs_store[1]);
		if (nome->mvs_store[1] < nome->mvs_store[2])
			return (nome->mvs_store[2]);
		if (nome->mvs_store[1] == nome->mvs_store[2])
			return (nome->mvs_store[1]);
	}
	if (nome->mvs_store[3] != 0 && nome->mvs_store[4] != 0)
	{
		if (nome->mvs_store[3] > nome->mvs_store[4])
			return (nome->mvs_store[3]);
		if (nome->mvs_store[3] < nome->mvs_store[4])
			return (nome->mvs_store[4]);
		if (nome->mvs_store[3] == nome->mvs_store[4])
			return (nome->mvs_store[3]);
	}
	return (0);
}

int	get_tot_mvs(t_data *nome)
{
	if (nome->mvs_store[1] != 0 && nome->mvs_store[2] == 0
		&& nome->mvs_store[3] == 0 && nome->mvs_store[4] == 0)
		return (nome->mvs_store[1]);
	if (nome->mvs_store[1] == 0 && nome->mvs_store[2] != 0
		&& nome->mvs_store[3] == 0 && nome->mvs_store[4] == 0)
		return (nome->mvs_store[2]);
	if (nome->mvs_store[1] == 0 && nome->mvs_store[2] == 0
		&& nome->mvs_store[3] != 0 && nome->mvs_store[4] == 0)
		return (nome->mvs_store[3]);
	if (nome->mvs_store[1] == 0 && nome->mvs_store[2] == 0
		&& nome->mvs_store[3] == 0 && nome->mvs_store[4] != 0)
		return (nome->mvs_store[4]);
	if (nome->mvs_store[2] != 0 && nome->mvs_store[3] != 0)
		return (nome->mvs_store[2] + nome->mvs_store[3]);
	if (nome->mvs_store[1] != 0 && nome->mvs_store[4] != 0)
		return (nome->mvs_store[1] + nome->mvs_store[4]);
	return (get_combinations(nome));
}
