/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:27:58 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/22 14:44:09 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_3(t_list **lst)
{
	int	min;
	int	max;

	min = ft_min_value(*lst);
	max = ft_max_value(*lst);
	if ((*lst)->num == min && (*lst)->next->num == max)
	{
		ft_sa(lst);
		ft_ra(lst);
	}
	else if ((*lst)->next->num == min && (ft_lstlast(*lst))->num == max)
		ft_sa(lst);
	else if ((*lst)->next->num == max && (ft_lstlast(*lst))->num == min)
		ft_rra(lst);
	else if ((*lst)->num == max && (*lst)->next->num == min)
		ft_ra(lst);
	else if ((*lst)->num == max && (ft_lstlast(*lst))->num == min)
	{
		ft_ra(lst);
		ft_sa(lst);
	}
}
