/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ahma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 15:08:10 by oel-ahma          #+#    #+#             */
/*   Updated: 2019/06/23 15:22:43 by oel-ahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "struct_trois.h"

void	print_number(t_nbr *tab, int buff, char **dico, char **av)
{
	int i;

	i = 0;
	if (ft_strcmp(av[1], "0") == 0)
		ft_putstr(dico[0]);
	else
	{
		while (i < buff)
		{
			convert_three(tab[i], dico);
			if (i < buff - 1)
				write(1, " ", 1);
			if (!(tab[i].cent == '0' && tab[i].deci == '0'
						&& tab[i].unit == '0') && i != buff - 1)
			{
				ft_putstr(dico[28 + (buff - i - 1)]);
				if (i < buff - 1)
					write(1, " ", 1);
			}
			i++;
		}
	}
}
