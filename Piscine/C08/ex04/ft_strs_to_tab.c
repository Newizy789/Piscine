/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfleyeh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 19:18:58 by yfleyeh           #+#    #+#             */
/*   Updated: 2019/06/26 11:36:35 by yfleyeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char					*ft_strdup(char *src)
{
	char *tab;

	if ((tab = malloc(sizeof(*src) * (ft_strlen(src)) + 1)) == NULL)
		return (NULL);
	ft_strcpy(tab, src);
	return (tab);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab_struct;

	if ((tab_strucut = (t_stock_str *)malloc(sizeof(t_stock_str) *
					(ac + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab_struct[i].size = ft_strlen(av[i]);
		tab_struct[i].str = av[i];
		tab_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_struct[i].str = 0;
	return (tab_struct);
}
