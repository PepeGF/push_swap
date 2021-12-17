/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:40:04 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/17 17:31:02 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

t_list	**ft_manage_input(t_list **lst, int argc, char **argv);
int		ft_isnum(char *str);
void	ft_error_exit(void);
//int		ft_check_repeated(t_list *lst);
void	ft_print_list(t_list *lst);
t_list	**ft_create_stack(t_list **lst, int argc, char **argv);

#endif
