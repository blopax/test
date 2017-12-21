/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvergnac <nvergnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 19:51:07 by nvergnac          #+#    #+#             */
/*   Updated: 2017/12/18 18:12:01 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int		ft_size(intmax_t n, int base)
{
	int i;

	i = 1;
	if (n >= 0 && n < base)
		return (1);
	while (n >= base)
	{
		n = n / base;
		i++;
	}
	return (i);
}

static long		ft_power(intmax_t n, int base)
{
	long result;

	result = 1;
	while (n > 1)
	{
		result *= base;
		n--;
	}
	return (result);
}

static char		ft_check_hex(intmax_t result, int base, int size)
{
	char c;

		if ((result / ft_power(size, base)) > 9)
			c = (result / (ft_power(size, base))) + 'a' - 10;
		else
			c = (result / (ft_power(size, base))) + 48;
		return (c);
}


char			*ft_itoa_base(intmax_t n, int base)
{
	int		size;
	int		neg;
	char	*itoa;
	intmax_t	result;

	result = n;
	neg = 0;
	if (result < 0)
	{
		result = -result;
		neg = 1;
	}
	size = ft_size(result, base);
	if (!(itoa = ft_strnew(size + neg)))
		return (0);
	if (neg == 1)
		*(itoa) = '-';
	while (size > 0)
	{
		*(itoa + neg) = ft_check_hex(result, base, size);
		result = result % ft_power(size, base);
		size--;
		neg++;
	}
	return (itoa);
}
