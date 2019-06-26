/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfleyeh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 14:29:22 by yfleyeh           #+#    #+#             */
/*   Updated: 2019/06/19 13:56:26 by yfleyeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int racine;

	racine = 1;
	if (nb < 0)
		return (0);
	while (racine <= nb / racine)
	{
		if (racine * racine == nb)
			return (racine);
		racine++;
	}
	return (0);
}
