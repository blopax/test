/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug_show.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:20:09 by pclement          #+#    #+#             */
/*   Updated: 2017/12/20 18:21:13 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NE PAS NORMER CA NE SERA PAS A INCLURE

#include "ft_printf.h"

void	ft_info_show(t_info info_struct)
{
	ft_putstr("INFO STRUCT = \t");
	ft_putstr("\n");
	ft_putstr("flags = \t|");
	ft_putstr(info_struct.flags);
	ft_putstr("|\n");
	ft_putstr("size = \t\t|");
	ft_putstr(info_struct.size);
	ft_putstr("|\n");
	ft_putstr("acc = \t\t|");
	ft_putstr(info_struct.acc);
	ft_putstr("|\n");
	ft_putstr("mdf = \t\t|");
	ft_putstr(info_struct.mdf);
	ft_putstr("|\n");
	ft_putstr("type = \t\t|");
	write(1, &(info_struct.type), 1);
	ft_putstr("|\n\n");
}

void	ft_print_lst(t_lst *index, int n)
{
	ft_putstr("MAILLON = \t");
	ft_putnbr(n);
	ft_putstr("\n");
	ft_putstr("init_str = \t|");
	ft_putstr(index->init_str);
	ft_putstr("|\n");
	ft_putstr("final_str = \t|");
	ft_putstr(index->final_str);
	ft_putstr("|\n");
	ft_putstr("flags = \t|");
	ft_putstr(index->flags);
	ft_putstr("|\n");
	ft_putstr("size = \t\t|");
	ft_putstr(index->size);
	ft_putstr("|\n");
	ft_putstr("acc = \t\t|");
	ft_putstr(index->acc);
	ft_putstr("|\n");
	ft_putstr("mdf = \t\t|");
	ft_putstr(index->mdf);
	ft_putstr("|\n");
	ft_putstr("type = \t\t|");
	write(1, &(index->type), 1);
	ft_putstr("|\n");
	ft_putstr("v_type =\t|");
	ft_putstr(index->v_type);
	ft_putstr("|\n");
	ft_putstr("val_signed =\t|");
	ft_putnbr_intmax(index->value_signed);
	ft_putstr("|\n");
	ft_putstr("val_unsigned =\t|");
	ft_putnbr(index->value_unsigned);
	ft_putstr("|\n");
	ft_putstr("value_ptr = \t|");
	ft_putnbr((long long)index->value_ptr);
	ft_putstr("|\n\n");
}

void	ft_lst_show(t_lst *first)
{
	t_lst	*index;
	int		i;

	i = 0;
	index = first;
	while (index)
	{
		ft_print_lst(index, i);
		index = index->next;
		i++;
	}
}

