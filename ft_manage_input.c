/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:41:41 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/15 19:54:23 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ft_manage_input(t_list **lst, int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;
/*
 *
 * OJO
 *
 * NO HE COPROBADO SI HAY REPETIDOS AUN
 *
 */

	i = 1;
	while (i < argc)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			if (ft_verify_input(str[j]))
			{
				write(1, "Error\n", 6);
				exit(EXIT_SUCCESS);
			}
			else
				ft_lstadd_back(lst, ft_lstnew(ft_atoi(str[i])));
			j++;
		}
		i++;
	}
	return (0);
}
