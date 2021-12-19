/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:40:04 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/19 22:54:54 by josgarci         ###   ########.fr       */
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
//
//posiblemente ESTA FUNCION NO ES NECESARIA, si fuese necesaria adaptarla
//printf propio
void	ft_print_list(t_list *lst);
t_list	**ft_create_stack(t_list **lst, int argc, char **argv);
void	ft_sa(t_list **lst);
void	ft_sb(t_list **lst);
void	ft_ss(t_list **list_a, t_list **list_b);
void	ft_pa(t_list **lst_a, t_list **lst_b);
void	ft_pb(t_list **lst_b, t_list **lst_a);


#endif
