/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:33:58 by fprosper          #+#    #+#             */
/*   Updated: 2022/06/16 11:27:08 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	lnstr;

	if ((!s1 && !s2) || (!s1 && s2) || (s1 && !s2))
	{
		return (NULL);
	}
	lnstr = ft_strlen(s1) + ft_strlen(s2) + 1;
	nstr = (char *)malloc(sizeof(char) * lnstr);
	if (!nstr)
	{
		return (NULL);
	}
	ft_memmove(nstr, s1, ft_strlen(s1));
	ft_memmove(nstr + ft_strlen(s1), s2, ft_strlen(s2));
	*(nstr + lnstr - 1) = '\0';
	return (nstr);
}
