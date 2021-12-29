/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:04:51 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/29 15:49:37 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_5(t_list **lst_a, t_list **lst_b)
{
	int		min_index;

	while (ft_lstsize(*lst_a) != 3)
	{
		min_index = ft_lstgetmin_index(*lst_a);
		if (min_index == 0)
		{
			ft_pb(lst_a, lst_b);
		}
		else if (min_index <= (ft_lstsize(*lst_a) / 2))
		{
			ft_ra(lst_a);
		}
		else
		{
			ft_rra(lst_a);
		}
	}
	ft_order_3(lst_a);
	while (ft_lstsize(*lst_b) != 0)
	{
		ft_pa(lst_b, lst_a);
	}
		ft_pa(lst_b, lst_a);
}
