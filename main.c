/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/30 19:33:43 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//vamos a empezar con la gestión de los datos de entrada


int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		total_numbers;
//int	check = 0;

	stack_a = 0;
	stack_b = 0;
	ft_create_stack(&stack_a, argc, argv);
	ft_range(stack_a);
	ft_check_duplicate(stack_a);
	total_numbers = ft_lstsize(stack_a);
	chunks = ft_parts(total_numbers);
	ft_print_list(stack_a);
	if (ft_lstsize(stack_a) == 0)
		ft_error_exit();
	if (ft_lstsize(stack_a) == 3)
		ft_order_3(&stack_a);
	if (ft_lstsize(stack_a) <= 500)
		ft_order_5(&stack_a, &stack_b);
	
	ft_print_list(stack_a);



	//check = ft_check_order(stack_a);
	//printf("Ordenado??");
	//if (check == 1)
	//printf("Si\n");
	//else
	//printf("No\n");
	return (0);
}
