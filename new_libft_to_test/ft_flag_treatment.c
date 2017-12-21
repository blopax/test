/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_treatment.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 16:37:14 by pclement          #+#    #+#             */
/*   Updated: 2017/12/21 18:31:44 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"


void	ft_adjust_size(t_lst *first, int ins_pos)
{
	char	*added_str;

	if (ft_c_in_str('0', first->flags) == 1 && ft_c_in_str('-', first->flags) == 0)
	{
		added_str = ft_added_str();
		i = 0;
		while (i < acc_nb - (int)ft_strlen(str))
				added_str[i++] = '0';
			if (str[0] == '-')
				str = ft_str_pos_ins(str, 1, added_str);
			else
				str = ft_str_pos_ins(str, 0, added_str);
		}
	}
	free(added_str);



void	ft_flag_treatment(t_lst *first)
{
	int		ins_pos;

	ins_pos = 0;
	if (first->type = d && (ft_c_in_str(' ', first->flags) == 1 || ft_c_in_str('+', first->flags) == 1 || first->init_str[0] == '-')
		ins_pos = ft_plus_space_flag(first);
//on met signe si positif et ins_pos = 1 si   ft_c_in_str('0', first->flags))) et pas de -
	if (ft_c_in_str(first->type, "oxX") == 1 && ft_c_in_str('#', first->flags) == 1)
		ins_pos = ft_sharp_flag(first);
	if ((int)ft_strlen(first->init_str) < ft_atoi(first->size))
		ft_adjust_size(first, ins_pos);
}
