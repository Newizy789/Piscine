/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ahma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 14:07:50 by oel-ahma          #+#    #+#             */
/*   Updated: 2019/06/23 20:50:59 by oel-ahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "struct_trois.h"
#include <unistd.h>

int	main(int ac, char **av)
{
	int		buff;
	t_nbr	*tab;
	char	**dico;

	if (ac == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_str_is_numeric(av[1]) == 0 || ft_strlen(av[1]) > 39 || ac != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	dico = main_dict();
	if (ft_strlen(av[1]) % 3 != 0)
		buff = (ft_strlen(av[1]) / 3) + 1;
	else
		buff = ft_strlen(av[1]) / 3;
	tab = malloc(sizeof(t_nbr) * (buff + 1));
	fill_tab(tab, buff, av);
	print_number(tab, buff, dico, av);
	write(1, "\n", 1);
	free(tab);
	free(dico);
}
