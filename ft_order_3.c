/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:27:58 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/20 17:10:20 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_3(t_list **lst)
{
	int	min;
	int max;

	min = ft_min(*lst);
	max = ft_max(*lst);
	if (*lst->num == 1 && *lst->next->num == 3)
	{
		ft_sa(lst);
		ft_ra(lst);
	}
	else if (*lst->num == 2 && *lst->next->num == 1)
		ft_sa(lst);
	else if (*lst->num == 2 && *lst->next->num == 3)
		ft_rra(lst);
	else if (*lst->num == 3 && *lst->next->num == 1)
		ft_ra(lst);
	else if (*lst->num == 3 && *lst->next->num == 2)
	{
		ft_ra(lst);
		ft_ra(lst);
	}
}
