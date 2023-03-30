/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:59:00 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 02:16:33 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	atoi_int_check(long long res)
{
	if ((res < -2147483648 || res > 2147483647))
		return (0);
	return (res);
}

int	atoi_sp_check(const char *str, int i)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' \
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	long long	res;
	int			i;
	int			sgn;

	if (!str)
		return (0);
	i = 0;
	res = 0;
	sgn = 1;
	i = atoi_sp_check(str, i);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	res = res * sgn;
	if (atoi_int_check(res) == 0)
		return (0);
	return ((int)res);
}
