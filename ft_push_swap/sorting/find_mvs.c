/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_mvs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:04:39 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 23:13:22 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

int	find_rrb(t_data *nome, int i)
{
	if (i >= nome->dim_b / 2)
		return (nome->dim_b - i);
	return (0);
}

int	find_rra(t_data *nome, int i)
{
	int	j;
	int	posix;

	j = 1;
	posix = nome->dim_a - 1;
	while (posix >= (nome->dim_a / 2))
	{
		if ((nome->a[posix - 1] < nome->b[i] && nome->b[i] < nome->a[posix]))
			return (j);
		j++;
		posix--;
	}
	j = 0;
	posix = nome->dim_a - 1;
	while (posix >= (nome->dim_a / 2))
	{
		if ((nome->b[i] < nome->min_a || nome->b[i] > nome->max_a)
			&& nome->a[posix] == nome->max_a)
			return (j);
		j++;
		posix--;
	}
	return (0);
}

int	find_rb(t_data *nome, int i)
{
	if (i < nome->dim_b / 2)
		return (i);
	return (0);
}

int	find_ra(t_data *nome, int i)
{
	int	j;

	j = 1;
	while (j < (nome->dim_a / 2))
	{
		if (nome->a[j - 1] < nome->b[i] && nome->b[i] < nome->a[j])
			return (j);
		j++;
	}
	j = 0;
	while (j < (nome->dim_a / 2))
	{
		if ((nome->b[i] < nome->min_a || nome->b[i] > nome->max_a)
			&& nome->a[j] == nome->max_a)
			return (j + 1);
		j++;
	}
	return (0);
}
