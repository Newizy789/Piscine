/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ahma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:43:43 by oel-ahma          #+#    #+#             */
/*   Updated: 2019/06/23 15:07:52 by oel-ahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_trois.h"
#include <unistd.h>

void	convert_three(t_nbr nbr, char **dico)
{
	if (nbr.cent != '-' && nbr.cent != '0')
	{
		ft_putstr(dico[nbr.cent - '0']);
		write(1, " ", 1);
		ft_putstr(dico[28]);
		write(1, " ", 1);
	}
	if (nbr.deci != '-' && nbr.deci != '0')
	{
		if (nbr.deci == '1')
			ft_putstr(dico[10 + (nbr.unit - '0')]);
		if (nbr.deci >= '2' && nbr.unit == '0')
			ft_putstr(dico[18 + (nbr.deci - '0')]);
		if (nbr.deci >= '2' && nbr.unit != '0')
		{
			ft_putstr(dico[18 + (nbr.deci - '0')]);
			write(1, "-", 1);
			ft_putstr(dico[nbr.unit - '0']);
		}
	}
	if (nbr.deci == '0' || nbr.deci == '-')
		if (nbr.unit != '0')
			ft_putstr(dico[nbr.unit - '0']);
}
