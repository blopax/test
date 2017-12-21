#include "ft_printf.h"



int		main(void)
{
	char	*str;
	char	*ins_str;
	int		pos;

	str = "yo" ;
	ins_str = "hello ";
	pos = 0;
	ft_putstr(ft_str_pos_ins(str, pos, ins_str));
	ft_putstr("\n");


	return (0);
	}
