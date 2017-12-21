/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 14:49:15 by pclement          #+#    #+#             */
/*   Updated: 2017/12/21 15:16:32 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_lst	*ft_delete_first(t_lst *first)
{
	t_lst	*tmp;

	tmp = first;
	if (first->next)
		first = first->next;
	free(tmp);
	return (first);
}


int		ft_display(t_lst *first)
{
	int		read_bytes;

	read_bytes = 0;
	while (first)
	{
		read_bytes = read_bytes + ft_strlen(first->init_str);
		write(1, first->init_str, ft_strlen(first->init_str));
		first = first->next;
	}
	return (read_bytes);
}
