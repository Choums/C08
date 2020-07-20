/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:42:25 by caidel            #+#    #+#             */
/*   Updated: 2020/07/20 15:15:49 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# include <stdlib.h>
# define TRUE 1
# define FALSE 0
# define ODD_MSG "I have an odd number of arguments."
# define EVEN_MSG "I have an even number of arguments."
# define SUCCESS 0
# define EVEN(nbr) nbr % 2 == 0

typedef int		t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
