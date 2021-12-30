/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:51:48 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/30 20:29:53 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_sort(t_list **lst_a, t_list **lst_b)
{
	int		i;
	int		bit;
	int		len_a;

	i = 1;
	bit = 0;
	len_a = ft_lstsize(*lst_a);
	while (i <= len_a)
	{
		if ((((*lst_a)->range) >> bit) % 2 == 0)
		{
			ft_pb(lst_a, lst_b);
		}
		else
		{
			ft_ra(lst_a);
		}
		i++;
	}
	printf("Stack A:\n");
	ft_print_list(*lst_a);
	printf("Stack B:\n");
	ft_print_list(*lst_b);
}
