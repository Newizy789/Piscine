/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfleyeh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 09:55:02 by yfleyeh           #+#    #+#             */
/*   Updated: 2019/06/19 17:21:49 by yfleyeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int c;

	c = 1;
	i = 0;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	while (i < nb / c)
	{
		i++;
		c++;
		if (nb % c == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		ft_is_prime(nb++);
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (nb);
}
