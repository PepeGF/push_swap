/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:21:13 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/20 10:38:51 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
 * El último elemento de la lista pasa a ser el primero, el primero pasa
 * al segundo y el penúltimo pasa al último.
 * Se desplazan todos hacia la derecha/abajo
 */

void	ft_rra(t_list **lst)
{
	t_list	*penult;

	penult = ft_lstindex(*lst, ft_lstsize(*lst) - 1);
	penult->next->next = *lst;
	*lst = penult->next;
	penult->next = 0;
}

void	ft_rrb(t_list **lst)
{
	t_list	*penult;

	penult = ft_lstindex(*lst, ft_lstsize(*lst) - 1);
	penult->next->next = *lst;
	*lst = penult->next;
	penult->next = 0;
}

void	ft_rrr(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a);
	ft_rrb(lst_b);
}
