/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/19 12:10:32 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//vamos a empezar con la gestión de los datos de entrada


int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	(void)stack_b;
	stack_a = 0;
	ft_create_stack(&stack_a, argc, argv);
	ft_print_list(stack_a);
	ft_sa(&stack_a);
	ft_print_list(stack_a);
	return (0);
}
