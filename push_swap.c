/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/15 19:42:48 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//vamos a empezar con la gestión de los datos de entrada

t_list	**ft_manage_input(t_list **lst, int argc, char **argv);

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	(void)stack_b;
	ft_manage_input(&stack_a, argc, argv);
	return (0);
}
