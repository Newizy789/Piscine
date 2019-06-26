/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfleyeh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:05:31 by yfleyeh           #+#    #+#             */
/*   Updated: 2019/06/18 16:27:28 by yfleyeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 1)
		return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (-1);
}
