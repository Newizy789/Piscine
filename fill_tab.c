/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ahma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 15:00:19 by oel-ahma          #+#    #+#             */
/*   Updated: 2019/06/23 15:23:22 by oel-ahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "struct_trois.h"

void	fill_tab(t_nbr *tab, int buff, char **av)
{
	int i;
	int j;

	tab[buff].cent = 0;
	tab[buff].deci = 0;
	tab[buff].unit = 0;
	i = buff - 1;
	j = ft_strlen(av[1]) - 1;
	while (i >= 0 && j >= 0)
	{
		tab[i].unit = av[1][j];
		if (j - 1 >= 0)
			tab[i].deci = av[1][j - 1];
		else
			tab[i].deci = '-';
		if (j - 2 >= 0)
			tab[i].cent = av[1][j - 2];
		else
			tab[i].cent = '-';
		j = j - 3;
		i--;
	}
}
