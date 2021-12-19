/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/19 22:56:36 by josgarci         ###   ########.fr       */
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
	stack_b = 0;
	ft_create_stack(&stack_a, argc, argv);
	ft_create_stack(&stack_b, argc, argv);
	printf("--------A---------\n");
	ft_print_list(stack_a);
	printf("--------B---------\n");
	ft_sb(&stack_b);
	ft_print_list(stack_b);
	printf("------------------\n");
//	printf("--------AMBAS-----\n");
	ft_pb(&stack_b, &stack_a);
	printf("--------A---------\n");
	ft_print_list(stack_a);
	printf("--------B---------\n");
	ft_print_list(stack_b);

	return (0);
}
