/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ahma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 12:54:05 by oel-ahma          #+#    #+#             */
/*   Updated: 2019/06/23 15:17:15 by oel-ahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "struct_trois.h"

char	**main_dict(void)
{
	int		fd;
	char	buff[691];
	char	**dico;

	fd = open("numbers.dict", O_RDONLY);
	read(fd, buff, 690);
	buff[690] = '\0';
	dico = ft_split(buff);
	return (dico);
}
