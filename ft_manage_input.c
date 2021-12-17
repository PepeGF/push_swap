/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:41:41 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/17 18:24:57 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_exit(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_SUCCESS);
}
/*
int	ft_check_repeated(t_list *lst)
{
	(void)lst;
	return (1);
}
*/
void	ft_print_list(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		printf("%d\n", lst->num);
		lst = lst->next;
	}
}


t_list	**ft_create_stack(t_list **lst, int argc, char **argv)
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
			//if (ft_isnum(str[j]))
				ft_lstadd_back(lst, ft_lstnew(ft_atoi(str[j])));
			write(1, "WOLOLO\n", 7);
				printf("%d\n", ft_atoi(str[j]));
			//free(str[j]);
			/*else
			{
				write(1, "Error\n", 6);
				exit(EXIT_SUCCESS);
			}*/
			j++;
		}
		//free(str);
		i++;
	}
	return (0);
}
