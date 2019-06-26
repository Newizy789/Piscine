/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfleyeh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 14:09:47 by yfleyeh           #+#    #+#             */
/*   Updated: 2019/06/17 16:16:45 by yfleyeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_error(char *base)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		while (base[j] && i != j)
		{
			if (base[j] == base[i] || base[i] == '+' || base[i] == '-')
			{
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	ft_print_nbr(unsigned int nbr, char *base)
{
	unsigned int i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	if (nbr >= i)
	{
		ft_print_nbr(nbr / i, base);
	}
	ft_putchar(base[nbr % i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int i;
	unsigned int nb;

	i = 0;
	nb = 0;
	if (base[i] && ft_error(base) == 1)
	{
		if (nbr < 0)
		{
			nb = -nbr;
			ft_putchar('-');
		}
		ft_print_nbr(nbr, base);
	}
	return ;
}
