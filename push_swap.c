/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/21 12:28:52 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//vamos a empezar con la gestión de los datos de entrada


int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
int max = 0;
int min = 0;

	stack_a = 0;
	stack_b = 0;
	ft_create_stack(&stack_a, argc, argv);
	ft_create_stack(&stack_b, argc, argv);
	ft_check_duplicate(stack_a);
	if (ft_lstsize(stack_a) == 0)
		ft_error_exit();
	ft_print_list(stack_a);
//	if (ft_lstsize(stack_a) == 3)
//		ft_order_3(&stack_a);
//
//	ft_print_list(stack_a);

	max = ft_max_value(stack_a);
printf("Max: %d\n", max);
min = ft_min_value(stack_a);
printf("Min: %d\n", min);

	return (0);
}
