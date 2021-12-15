/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:40:04 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/15 19:40:06 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
/*
typedef struct s_list
{
	char			*content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;
*/

t_list	**ft_manage_input(t_list **lst, int argc, char **argv);
int		ft_verify_input(char *str);

#endif
