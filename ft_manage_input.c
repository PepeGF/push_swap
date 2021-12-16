/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:41:41 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/16 19:19:14 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_exit(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_SUCCESS);
}

int	ft_check_repeated(t_list **lst)
{
	(void)lst;
	return (1);
}


t_list	**ft_manage_input(t_list **lst, int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (i < argc)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			if (ft_verify_input(str[j]))
				ft_error_exit();
			else
				ft_lstadd_back(lst, ft_lstnew(ft_atoi(str[i])));
			j++;
		}
		i++;
	}
	if (ft_check_repeated(lst))
		ft_error_exit();
	return (0);
}
