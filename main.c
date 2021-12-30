/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/30 22:35:54 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		total_numbers;
	int		check;

	stack_a = 0;
	stack_b = 0;
	ft_create_stack(&stack_a, argc, argv);
	ft_range(stack_a);
	ft_check_duplicate(stack_a);
	total_numbers = ft_lstsize(stack_a);
	if (total_numbers == 0)
		ft_error_exit();
	check = ft_check_order(stack_a);
	if (check == 1)
		return (0);
	else if (total_numbers == 3)
		ft_order_3(&stack_a);
	else if (total_numbers <= 5)
		ft_order_5(&stack_a, &stack_b);
	else
		ft_radix_sort(&stack_a, &stack_b);
	ft_free(stack_a);
	return (0);
}
