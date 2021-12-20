/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:26:05 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/20 13:29:08 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (((str[i] == '-' || str[i] == '+') && len > 1) || ft_isdigit(str[i]))
	{
		while (str[++i])
		{
			if (!ft_isdigit(str[i]))
				return (1);
		}
		return (0);
	}
	else
		return (1);
}

void	ft_check_overflow(long int num)
{
	if (num < INT_MIN || num > INT_MAX)
	{
		ft_error_exit();
	}
}

int	ft_check_duplicate(t_list *lst)
{
	t_list	*aux;

	while (lst)
	{
		ft_check_overflow(lst->num);
		aux = lst->next;
		while (aux)
		{
			if (lst->num == aux->num)
			{
				ft_error_exit();
			}
			aux = aux->next;
		}
		lst = lst->next;
	}
	return (0);
}
