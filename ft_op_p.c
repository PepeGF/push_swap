/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:43:18 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/19 21:02:53 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* El primer elemento de a pasa a ser el primero de b
 */

void	ft_pa(t_list **lst_a, t_list **lft_b)
{
	t_list	*aux;

	aux = (*lst_a)->next;
	(*lst_a)->next = *lst_b;
	*lst_b = *lst_a;
	*lst_a = aux;
}

void   ft_pb(t_list **lst_b, t_list **lst_a)
{
	t_list *aux;

	aux = (*lst_b)->next;
	(*lst_b)->next = *lst_a;
	*lst_a = *lst_b;
	*lst_b = aux;
}
