/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:18:02 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 17:08:18 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../get_next_line/get_next_line.h"
#include  "../push_swap.h"

int	precisore(char *str, int i)
{
	if ((str[i] == '\n' || str[i] == '\0')
		&& (str[0] == 's' || str[0] == 'p' || str[0] == 'r'))
		return (0);
	return (1);
}

void	exe_ops(t_data *nome, char *str)
{
	if (ft_strncmp(str, "pa", 2) == 0 && precisore(str, 2) == 0)
		pa(nome, 0);
	else if (ft_strncmp(str, "pb", 2) == 0 && precisore(str, 2) == 0)
		pb(nome, 0);
	else if (ft_strncmp(str, "sa", 2) == 0 && precisore(str, 2) == 0)
		sa(nome, 0);
	else if (ft_strncmp(str, "sb", 2) == 0 && precisore(str, 2) == 0)
		sb(nome, 0);
	else if (ft_strncmp(str, "ra", 2) == 0 && precisore(str, 2) == 0)
		ra(nome, 0);
	else if (ft_strncmp(str, "rb", 2) == 0 && precisore(str, 2) == 0)
		rb(nome, 0);
	else if (ft_strncmp(str, "rra", 3) == 0 && precisore(str, 3) == 0)
		rra(nome, 0);
	else if (ft_strncmp(str, "rrb", 3) == 0 && precisore(str, 3) == 0)
		rrb(nome, 0);
	else if (ft_strncmp(str, "rrr", 3) == 0 && precisore(str, 3) == 0)
		rrr(nome, 0);
	else if (ft_strncmp(str, "rr", 2) == 0 && precisore(str, 2) == 0)
		rr(nome, 0);
	else
		nome->re = 1;
	return ;
}

void	readmove(t_data *nome)
{
	char	*moves;

	nome->re = 0;
	while (1)
	{
		moves = get_next_line(0);
		if (moves == 0)
			break ;
		exe_ops(nome, moves);
		free(moves);
	}
	return ;
}

int	main(int argc, const char **argv)
{
	t_data	nome;

	if (argc < 2)
		return (0);
	nome.argc = argc;
	nome.a = get_a(&nome, argv, 0);
	if (!nome.a)
		return (0);
	nome.b = get_b(&nome);
	if (!nome.b)
		return (0);
	readmove(&nome);
	if (order_check(&nome, nome.a) == 0)
		write(1, "OK\n", 3);
	else
	{
		free(nome.a);
		if (nome.re == 0)
			write(1, "KO\n", 3);
		else
			write(1, "Error\n", 6);
	}
	free(nome.b);
	return (0);
}
