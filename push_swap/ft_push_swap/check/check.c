/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:57:47 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 14:28:30 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int	str_char_check(const char *i_argv)
{
	int	j;

	j = 0;
	while (i_argv[j] != '\0')
	{
		if (ft_isdigit((int)i_argv[j]) == 0
			&& i_argv[j] != ' ' && i_argv[j] != '-' && i_argv[j] != '+')
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (i_argv[j] == '-' && (ft_isdigit((int)i_argv[j + 1]) == 0
				|| i_argv[j] == '\0'))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		j++;
	}
	return (1);
}

int	num_check(const char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (ft_isdigit((int)str[j]) == 1)
			return (1);
		j++;
	}
	return (0);
}

char	dub_check(t_data *nome, int *s)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < (nome->nargc - 2))
	{
		tmp = s[i];
		j = i + 1;
		while (j <= (nome->nargc - 2))
		{
			if (s[j] == tmp)
			{
				free(s);
				write(2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	order_check(t_data *nome, int *s)
{
	int	i;

	i = 0;
	while (i < nome->nargc - 2)
	{
		if (s[i] > s[i + 1])
			return (1);
		i++;
	}
	free(s);
	return (0);
}
