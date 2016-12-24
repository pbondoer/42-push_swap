/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libpushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbondoer <pbondoer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 08:47:08 by pbondoer          #+#    #+#             */
/*   Updated: 2016/12/24 09:51:08 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPUSHSWAP_H
# define LIBPUSHSWAP_H

typedef struct		s_stack
{
	int		max;
	int		size;
	int		pos;
	int		*values;
}					t_stack;

t_stack				*ps_new_stack(int size, int array_size, int *values);
int					ps_pos_to_array(t_stack *s, int pos);
int					ps_get(t_stack *s, int pos);
void				ps_print_stack(t_stack *s, int hl, int hl2);
#endif
