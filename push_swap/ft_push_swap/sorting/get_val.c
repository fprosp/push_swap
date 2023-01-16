/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_val.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:32:28 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/15 23:10:58 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

int	num_chr(t_data *nome, int min_a)
{
	int	i;

	i = 0;
	while (i < nome->dim_a)
	{
		if (nome->a[i] == min_a)
			return (i);
		i++;
	}
	return (0);
}

int	min_val(int *arr, int dim)
{
	int	i;
	int	min;

	i = 1;
	min = arr[0];
	while (i < dim)
	{
		if (min > arr[i])
			min = arr[i];
		i++;
	}
	return (min);
}

int	max_val(int *arr, int dim)
{
	int	i;
	int	max;

	i = 1;
	max = arr[0];
	while (i < dim)
	{
		if (max < arr[i])
			max = arr[i];
		i++;
	}
	return (max);
}
