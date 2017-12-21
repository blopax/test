#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include <limits.h>

int		main(int argc, char **argv)
{
	int		i;
//	int		count;
	char	*format;
//	int		n;
//	char	*str;

	i = 1;
	while (i < argc)
	{
		printf("%s", argv[i]);
		i++;
	}
//	first = ft_lst_init();
//	info_struct = ft_info_init();

/*	format = "% 8.4dalors %dautremaillon%schaine_finale";
	ft_printf(format, 3,4,"hello");

	ft_putstr("\n\n");

	format = "%sifdsf%s";
	ft_printf(format,"hello", "hello");
	ft_putstr("\n\n");
*/
/*	format = "%s%s%.2s";
	ft_printf(format, "1hello",  "2hello", "hello3");
	ft_putstr("\n\n");

	format = "%s%.0s%s";
	ft_printf(format, "1hello",  "2hello", "hello3");
	ft_putstr("\n\n");
*/
	//format = "%#-5o%#05o%#-4o%#04o";
//	format = "%+7d%#7o%+7o%#7d";
	format = "%.7d";
	ft_printf(format, 0);
	ft_putstr("\n\n");
	printf(format, 0);
//	ft_putstr("\n\n");
//	format = "%ho";
//	ft_printf(format, 10);
//	ft_putstr("\n\n");
//	printf("\n%.0s\n", "012345");
//	while (first)
//	{
//		ft_lst_show(first, 0);
//		first = first->next;
//	}
// ft_putstr(ft_v_type('s', "hh"););

//	ft_empty_lst(first);
//	sleep(100);

	return (0);
}
