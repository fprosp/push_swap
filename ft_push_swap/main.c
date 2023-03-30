/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprosper <fprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:24:33 by fprosper          #+#    #+#             */
/*   Updated: 2023/01/16 14:38:50 by fprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

int	main(int argc, const char **argv)
{
	t_data	nome;

	if (argc < 2)
		return (0);
	nome.argc = argc;
	nome.a = get_a(&nome, argv, 1);
	if (!nome.a)
		return (0);
	nome.b = get_b(&nome);
	if (!nome.b)
		return (0);
	order_ops(&nome);
	return (0);
}
