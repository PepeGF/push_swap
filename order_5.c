/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:04:51 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/23 13:21:54 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_5(t_list **lst_a, t_list **lst_b)
{
	int		len_a;
	int		min;
	int		min_index;

	(void)lst_b;
	len_a = 5;
	min = ft_lstmin_value(*lst_a);
	min_index = ft_lstgetmin_index(*lst_a);
	printf("Valor mínimo: %d\nÍndice del min: %d\n", min, min_index);
	(void)len_a;
}
