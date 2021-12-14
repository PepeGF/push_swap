/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josgarci <josgarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:08:47 by josgarci          #+#    #+#             */
/*   Updated: 2021/12/14 12:30:32 by josgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//vamos a empezar con la gestión de los datos de entrada

static int	ft_input_management(int argc, *char argv[]);
static int	ft_display_error(void);

int	main(int argc, *char argv[])
{
	if (ft_input_management(argc, argv))
		return (ft_display_error);
}

static int	ft_input_management(int argc, *char argv[])
{
	if (argc == 1)
		return (ft_display_error);
}

static int ft_display_error(void)
{
	write(1, "Error\n", 6);//comprobar si hay que poner \n
	return (1);
}
