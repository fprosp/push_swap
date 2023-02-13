/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:24:17 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/12 20:16:13 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int	str_cpy(t_data *nome, int i, char **argv_tmp, int *s)
{
	int	j;

	j = 0;
	while (j < nome->npc)
	{
		s[i + nome->npt - nome->npc] = ft_atoi(argv_tmp[j]);
		if ((s[i + nome->npt - nome->npc] == 0
				&& (int)ft_strlen(argv_tmp[j]) > 1))
		{
			write(2, "Error\n", 6);
			free(argv_tmp[j]);
			free(argv_tmp);
			return (0);
		}
		free(argv_tmp[j]);
		j++;
		i++;
	}
	free(argv_tmp);
	return (1);
}

int	num_cpy(t_data *nome, int i, const char **argv, int *s)
{
	s[i - 1 + nome->npt] = ft_atoi(argv[i]);
	if ((s[i - 1 + nome->npt] == 0 && (int)ft_strlen(argv[i]) > 1))
	{
		write(2, "Error\n", 6);
		free(s);
		return (0);
	}
	return (1);
}
