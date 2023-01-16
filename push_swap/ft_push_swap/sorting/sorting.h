/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:43:22 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 02:15:49 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include "../push_swap.h"

struct	s_data;

void	sort_short(struct s_data *nome);
void	order_ops(struct s_data *nome);
int		*get_lis(struct s_data *nome);
int		get_mem(struct s_data *nome);
int		get_free_lis_memory(struct s_data *nome);
void	free_all_lis(struct s_data *nome);
void	push_back(struct s_data *nome);
void	mvs_exe(struct s_data *nome);
void	sort_short(struct s_data *nome);
int		min_val(int *arr, int dim);
int		max_val(int *arr, int dim);
int		find_ra(struct s_data *nome, int i);
int		find_rb(struct s_data *nome, int i);
int		find_rra(struct s_data *nome, int i);
int		find_rrb(struct s_data *nome, int i);
int		get_tot_mvs(struct s_data *nome);
void	exe_1(struct s_data *nome);
void	exe_2(struct s_data *nome);
void	exe_3(struct s_data *nome);
void	exe_4(struct s_data *nome);
void	act_1(struct s_data *nome);
void	act_2(struct s_data *nome);
void	free_a_b(struct s_data *nome);
void	free_helper(struct s_data *nome);
int		num_chr(struct s_data *nome, int min_a);
void	restore_order(struct s_data *nome);
void	sort_short(struct s_data *nome);

#endif
