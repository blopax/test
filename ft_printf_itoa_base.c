/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_itoa_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:30:41 by pclement          #+#    #+#             */
/*   Updated: 2017/12/21 14:41:17 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/includes/libft.h"
#include <stdlib.h>

int		ft_neg(intmax_t value, int base_size)
{
	if (value < 0)
	{
		if (base_size == 10)
			return (-1);
	}
	return (1);
}

/*
**Doesn't take into account sign if base different from 10
*/

char	*ft_itoa_base_intmax(intmax_t value, char *base)
{
	char		*tab;
	int			tab_len;
	intmax_t	result;
	int			neg;
	int			i;

	neg = ft_neg(value, ft_strlen(base));
	(value < 0) ? (result = -value) : (result = value);
	(neg > 0) ? (tab_len = 1) : (tab_len = 2);
	while ((result = result / ft_strlen(base)) >= 1)
		tab_len++;
	if (!(tab = ft_strnew(tab_len + 1)))
		return (0);
	(value < 0) ? (result = -value) : (result = value);
	i = 0;
	while (++i <= tab_len)
	{
		tab[tab_len - i] = base[result % ft_strlen(base)];
		result = result / ft_strlen(base);
	}
	if (neg == -1)
		tab[0] = '-';
	return (tab);
}

/*
**pb ac intmax min qd negqtif en passant au plus
**Only for uintmax_t everything positive. cast before
*/

char	*ft_itoa_base_uintmax(uintmax_t value, char *base)
{
	char		*tab;
	int			tab_len;
	uintmax_t	result;
	int			i;

	result = value;
	tab_len = 1;
	while ((value = value / ft_strlen(base)) >= 1)
		tab_len++;
	if (!(tab = ft_strnew(tab_len + 1)))
		return (0);
	i = 0;
	while (++i <= tab_len)
	{
		tab[tab_len - i] = base[result % ft_strlen(base)];
		result = result / ft_strlen(base);
	}
	return (tab);
}
