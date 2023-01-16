/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:57:59 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 15:25:35 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include "./check/check.h"
# include "./sorting/sorting.h"
# include "./operations/operations.h"

typedef struct s_data
{
	int	npc;
	int	npt;
	int	nargc;
	int	argc;
	int	*a;
	int	*bkp_a;
	int	*b;
	int	bkp_b;
	int	min_a;
	int	max_a;
	int	dim_a;
	int	dim_b;
	int	res_a;
	int	res_b;
	int	*lis;
	int	lis_len;
	int	*arr_lis;
	int	i_len;
	int	best_len;
	int	tmp;
	int	*arr_tmp;
	int	*arr_best;
	int	*mvs_store;
	int	*best_mvs;
	int	re;
}	t_data;

#endif
