/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_trois.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ahma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 20:58:19 by oel-ahma          #+#    #+#             */
/*   Updated: 2019/06/23 15:37:22 by oel-ahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _STRUCT_TROIS_H
# define _STRUCT_TROIS_H

void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
char			**ft_split(char *str);
char			**main_dict(void);
int				ft_str_is_numeric(char *str);

typedef	struct	s_nbr
{
	char cent;
	char deci;
	char unit;
}				t_nbr;
void			convert_three(t_nbr nbr, char **dico);
void			fill_tab(t_nbr *tab, int buff, char **av);
void			print_number(t_nbr *tab, int buff, char **dico, char **av);
#endif
