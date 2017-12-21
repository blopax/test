/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:07:04 by pclement          #+#    #+#             */
/*   Updated: 2017/12/21 15:11:39 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_info	ft_info_init(void)
{
	t_info	new_info;

	new_info.flags = NULL;
	new_info.size = NULL;
	new_info.acc = NULL;
	new_info.mdf = NULL;
	new_info.type = 0;
	return (new_info);
}

t_lst	*ft_lst_init(void)
{
	t_lst	*new_lst;

	if (!(new_lst = (t_lst *)malloc(sizeof(t_lst))))
		return (NULL);
	new_lst->init_str = NULL;
	new_lst->final_str = NULL;
	new_lst->flags = NULL;
	new_lst->size = NULL;
	new_lst->acc = 0;
	new_lst->mdf = NULL;
	new_lst->type = 0;
	new_lst->next = NULL;
	new_lst->v_type = 0;
	new_lst->value_ptr = 0;
	new_lst->value_signed = 0;
	new_lst->value_unsigned = 0;
	return (new_lst);
}

void	ft_empty_lst(t_lst *first)
{
	t_lst	*index;

	while (first)
	{
		free(first->init_str);
		free(first->final_str);
		free(first->flags);
		free(first->size);
		free(first->acc);
		free(first->mdf);
		free(first->value_ptr);
		index = first->next;
		free(first);
		first = index;
	}
}

void	ft_empty_struct(t_info *info_struct_ptr)
{
	if (info_struct_ptr->flags)
		free(info_struct_ptr->flags);
	if (info_struct_ptr->size)
		free(info_struct_ptr->size);
	if (info_struct_ptr->acc)
		free(info_struct_ptr->acc);
	if (info_struct_ptr->mdf)
		free(info_struct_ptr->mdf);
	info_struct_ptr->type = 0;
}

void	ft_reinit_struct(t_info *info_struct_ptr)
{
	if (info_struct_ptr->flags)
	{
		free(info_struct_ptr->flags);
		info_struct_ptr->flags = NULL;
	}
	if (info_struct_ptr->size)
	{
		free(info_struct_ptr->size);
		info_struct_ptr->size = NULL;
	}
	if (info_struct_ptr->acc)
	{
		free(info_struct_ptr->acc);
		info_struct_ptr->acc = NULL;
	}
	if (info_struct_ptr->mdf)
	{
		free(info_struct_ptr->mdf);
		info_struct_ptr->mdf = NULL;
	}
	info_struct_ptr->type = 0;
}
