

#include "../libft/includes/libft.h"


int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int value, char *base);
char	*ft_convert_base(char *str, char *init_base, char *final_base);


int		main(void)
{
/*	ft_putnbr(ft_atoi_base("2FF", "0123456789ABCDEF"));
	ft_putstr("\n");
	ft_putnbr(ft_atoi_base("-1234", "0123456789"));
	ft_putstr("\n");
	ft_putnbr(ft_atoi_base("-9223372036854775810", "0123456789"));
	ft_putstr("\n");
	ft_putnbr(atoi("-9223372036854775810"));
	ft_putstr("\n");
	ft_putnbr(ft_atoi_base("-2147483649", "0123456789"));
	ft_putstr("\n");
	ft_putnbr(ft_atoi_base("2147483648", "0123456789"));
	ft_putstr("\n");
*/

	ft_putstr(ft_itoa_base(1234,"0123456789"));
	ft_putstr("\n");
	ft_putstr(ft_itoa_base(-1234,"0123456789"));
	ft_putstr("\n");
	ft_putstr(ft_itoa_base(255,"0123456789ABCDEF"));
	ft_putstr("\n");
	ft_putstr(ft_itoa_base(-255,"0123456789ABCDEF"));
	ft_putstr("\n");
	ft_putstr("\n");
	ft_putstr(ft_convert_base("12","0123456789", "01"));
	ft_putstr("\n");
	ft_putstr(ft_convert_base("255","0123456789", "0123456789ABCDEF"));
	ft_putstr("\n");
	ft_putstr(ft_convert_base("-255","0123456789", "0123456789ABCDEF"));
	ft_putstr("\n");









	return (0);
}
