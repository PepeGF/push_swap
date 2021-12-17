/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:26:05 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/17 14:00:16 by josgarci         ###   ########.fr       */
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
