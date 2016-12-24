/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 07:42:13 by pbondoer          #+#    #+#             */
/*   Updated: 2016/12/24 07:56:56 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int			main(int ac, char **av)
{
	int c;
	int i;
	int last;

	if (ac < 2)
	{
		ft_putendl("error: no arguments, please specify an integer list");
		return (1);
	}
	i = 1;
	last = INT_MIN;
	while (i < ac)
	{
		if (!ft_isnumber(av[i]))
		{
			ft_putendl("error: invalid arguments");
			return (1);
		}
		c = ft_atoi(av[i]);
		if (c < last)
		{
			ft_putendl("KO");
			return (1);
		}
		last = c;
		i++;
	}
	ft_putendl("OK");
	return (0);
}
