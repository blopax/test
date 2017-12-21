/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_treatment.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:15:58 by pclement          #+#    #+#             */
/*   Updated: 2017/12/21 14:38:45 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_val_filled(char *v_type)
{
	char	*str;

	str = 0;
	if ((ft_strcmp(v_type, "int") == 0) || (ft_strcmp(v_type, "short int") == 0)
			|| (ft_strcmp(v_type, "signed char") == 0)
			|| (ft_strcmp(v_type, "long") == 0)
			|| (ft_strcmp(v_type, "long long") == 0)
			|| (ft_strcmp(v_type, "intmax_t") == 0)
			|| (ft_strcmp(v_type, "ssize_t") == 0)
			|| (ft_strcmp(v_type, "wint_t") == 0))
		str = "value_signed";
	if ((ft_strcmp(v_type, "size_t") == 0)
			|| (ft_strcmp(v_type, "unsigned short int") == 0)
			|| (ft_strcmp(v_type, "unsigned char") == 0)
			|| (ft_strcmp(v_type, "unsigned long") == 0)
			|| (ft_strcmp(v_type, "unsigned long long") == 0)
			|| (ft_strcmp(v_type, "uintmax_t") == 0))
		str = "value_unsigned";
	if ((ft_strcmp(v_type, "char *") == 0)
			|| (ft_strcmp(v_type, "wchar_t *") == 0)
			|| (ft_strcmp(v_type, "void *") == 0))
		str = "value_ptr";
	return (str);
}

char	*ft_char_conv(int value_signed)
{
	char	*str;

	str = ft_strnew(1);
	str[0] = (unsigned char)value_signed;
	return (str);
}

char	*ft_signed_conv_treatment(t_lst *first)
{
	uintmax_t	value;

	if (ft_strcmp(first->v_type, "int") == 0)
		value = (uintmax_t)((unsigned int)first->value_signed);
	else
		value = (uintmax_t)first->value_signed;
	if (first->type == 'd')
		return (ft_itoa_base_intmax(first->value_signed, "0123456789"));
	if (first->type == 'o')
		return (ft_itoa_base_uintmax(value, "01234567"));
	if (first->type == 'u')
		return (ft_itoa_base_uintmax(value, "0123456789"));
	if (first->type == 'x')
		return (ft_itoa_base_uintmax(value, "0123456789abcdef"));
	if (first->type == 'X')
		return (ft_itoa_base_uintmax(value, "0123456789ABCDEF"));
	if (first->type == 'c')
		return (ft_char_conv(first->value_signed));
	return (NULL);
}

char	*ft_unsigned_conv_treatment(t_lst *first)
{
	char	*str;

	str = NULL;
	if (first->type == 'o')
		str = ft_itoa_base_uintmax(first->value_unsigned, "01234567");
	if (first->type == 'u')
		str = ft_itoa_base_uintmax(first->value_unsigned, "0123456789");
	if (first->type == 'x')
		str = ft_itoa_base_uintmax(first->value_unsigned, "0123456789abcdef");
	if (first->type == 'X')
		str = ft_itoa_base_uintmax(first->value_unsigned, "0123456789ABCDEF");
	return (str);
}

void	ft_conv_treatment(t_lst *first)
{
	while (first)
	{
		if (ft_strcmp(ft_val_filled(first->v_type), "value_signed") == 0)
			first->init_str = ft_signed_conv_treatment(first);
		if (ft_strcmp(ft_val_filled(first->v_type), "value_unsigned") == 0)
			first->init_str = ft_unsigned_conv_treatment(first);
		if (ft_strcmp(ft_val_filled(first->v_type), "value_ptr") == 0)
		{
			if (!(first->init_str = ft_strdup((char *)first->value_ptr)))
				exit(0);
		}
		first = first->next;
	}
}
