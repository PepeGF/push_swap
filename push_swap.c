/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/20 11:45:14 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//vamos a empezar con la gestión de los datos de entrada


int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 0;
	(void)i;
	(void)stack_b;
	stack_a = 0;
	stack_b = 0;
	ft_create_stack(&stack_a, argc, argv);
	ft_create_stack(&stack_b, argc, argv);
	printf("--------A---------\n");
	ft_print_list(stack_a);
	i = ft_check_duplicate(stack_a);
	printf("-->>>%d\n", i);
//	printf("--------B---------\n");
//	ft_sb(&stack_b);
//	ft_print_list(stack_b);
	printf("------------------\n\n");
//	ft_rrr(&stack_a, &stack_b);
//	ft_print_list(stack_a);
//	printf("--------AMBAS-----\n");
//	printf("------------------\n");
//	printf("--------B---------\n");
//	ft_print_list(stack_b);

	return (0);
}
