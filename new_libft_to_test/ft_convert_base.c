
#include "../libft/includes/libft.h"
#include <stdlib.h>

static int		limits_check(unsigned long long result, int sign, int count, int base)
{
	long		int_max;
	int		count_max;

	count_max = 1;
	int_max = 9223372036854775807;

	while ((int_max = int_max / base) > 0)
		count_max++;
	if ((result >= 9223372036854775807 || count > count_max) && sign == 1)
		return (-1);
	else if ((result > 9223372036854775807 || count > count_max) && sign == -1)
		return (0);
	else
		return (1);
}

int		ft_index_first_c_in_str(char c, char *str)
{
	int i;

	if (!str)
		exit(0);
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}


int		ft_check_base(char *base)
{
	char	c;

	if (ft_index_first_c_in_str('+', base) >= 0)
		return (1);
	if (ft_index_first_c_in_str('-', base) >= 0)
		return (1);
	if (ft_index_first_c_in_str(' ', base) >= 0)
		return (1);
	c = 9;
	while (c <= 13)
	{
		if (ft_index_first_c_in_str('+', base) >= 0)
			return (1);
		c++;
	}
	return (0);
}

/*
**Works as for ft_atoi if more than long int returns -1, less than long int min returns 0
**+ and - taken into account even for other bases
**char 9 to 13 and space ignored at the first
*/
int			ft_atoi_base(char *str, char *base)
{
	int					i;
	int					start;
	unsigned long long	result;
	int					sign;

	i = 0;
	result = 0;
	sign = 1;

	if (ft_check_base(base) == 1)
		exit(0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	start = i;

	while (ft_index_first_c_in_str(str[i], base) >= 0)
	{
		result = result * ft_strlen(base) + ft_index_first_c_in_str(str[i], base);
		i++;
		if (limits_check(result, sign, i - start, ft_strlen(base)) != 1)
			return (limits_check(result, sign, i - start, ft_strlen(base)));
	}
	return ((sign * result));
}



int		ft_neg(int value, int base_size)
{
	if (value < 0)
	{
		if (base_size == 10)
			return (-1);
	}
	return (1);
}


/*
Doesn't take into account sign if base different from 10
*/

char	*ft_itoa_base(int value, char *base)
{
	char	*tab;
	int		tab_len;
	int		base_size;
	long	result;
	int 	neg;
	int		i;

	base_size = ft_strlen(base);
	neg = ft_neg(value, base_size);
	(value < 0) ? (result = -(long)value) : (result = (long)value);
	(neg > 0) ? (tab_len = 1) : (tab_len = 2);
	while ((result = result / base_size) >= 1)
		tab_len++;
	if (!(tab = ft_strnew(tab_len + 1)))
		return (0);
	(value < 0) ? (result = -(long)value) : (result = (long)value);
	i = 0;
	while (++i <= tab_len)
	{
		tab[tab_len - i] = base[result % base_size];
		result = result / base_size;
	}
	if (neg == -1)
		tab[0] = '-';
	return (tab);
}

char	*ft_convert_base(char *str, char *init_base, char *final_base)
{
	if (!str || !init_base || !final_base)
		return (0);
	return (ft_itoa_base(ft_atoi_base(str, init_base), final_base));
}
