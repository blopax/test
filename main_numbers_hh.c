#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include <limits.h>

int		main(int argc, char **argv)
{
	int		i;
	int		count;
	char	*format;
	int		n;
	char	*str;

	i = 1;
	while (i < argc)
	{
		printf("%s", argv[i]);
		i++;
	}
//	first = ft_lst_init();
//	info_struct = ft_info_init();

/*	format = "% 8.4dalors %hhdautremaillon%schaine_finale";
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
//	format = "%hho";
//	ft_printf(format, 10);
//	ft_putstr("\n\n");

	printf("\n\n\nFLAG HH_____________________________________FLAG HH\n");
//TEST BASE 10
	printf("\nTEST ON d  FLAG HH_________________\n");
	printf("\n\nCase1: d > 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", 15);
	printf("\n----func----\n");
	ft_printf("%hhd", 15);
	printf("|");

	printf("\n\nCase2: d < 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", -15);
	printf("\n----func----\n");
	ft_printf("%hhd", -15);
	printf("|");

	printf("\n\nCase3: d = 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", 0);
	printf("\n----func----\n");
	ft_printf("%hhd", 0);
	printf("|");

	printf("\n\nCase4: d = INT_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%hhd", INT_MAX);
	printf("|");

	printf("\n\nCase5: d =  INT_MIN Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%hhd", INT_MIN);
	printf("|");

	printf("\n\nCase7: d =  UINT_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%hhd", UINT_MAX);
	printf("|");

	printf("\n\nCase8: d =  LONG_MIN Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%hhd", LONG_MIN);
	printf("|");

	printf("\n\nCase8: d =  LONG_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hhd", LONG_MAX);
	printf("|");

	printf("\n\nCase8: d =  ULONG_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hhd|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hhd", ULONG_MAX);
	printf("|");


//TEST BASE 8

	printf("\n\n\nTEST ON o  FLAG HH_________________\n");
	printf("\n\nCase1: o > 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", 15);
	printf("\n----func----\n");
	ft_printf("%hho", 15);
	printf("|");

	printf("\n\nCase2: o < 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", -15);
	printf("\n----func----\n");
	ft_printf("%hho", -15);
	printf("|");

	printf("\n\nCase3: o = 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", 0);
	printf("\n----func----\n");
	ft_printf("%hho", 0);
	printf("|");

	printf("\n\nCase4: o = INT_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%hho", INT_MAX);
	printf("|");

	printf("\n\nCase5: o =  INT_MIN Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%hho", INT_MIN);
	printf("|");

	printf("\n\nCase7: o =  UINT_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%hho", UINT_MAX);
	printf("|");

	printf("\n\nCase8: o =  LONG_MIN Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%hho", LONG_MIN);
	printf("|");

	printf("\n\nCase8: o =  LONG_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hho", LONG_MAX);
	printf("|");

	printf("\n\nCase8: o =  ULONG_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hho|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hho", ULONG_MAX);
	printf("|");



//TEST BASE 16 x
	printf("\n\n\nTEST ON x  FLAG HH_________________\n");
	printf("\n\nCase1: x > 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", 25);
	printf("\n----func----\n");
	ft_printf("%hhx", 25);
	printf("|");

	printf("\n\nCase2: x < 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", -15);
	printf("\n----func----\n");
	ft_printf("%hhx", -15);
	printf("|");

	printf("\n\nCase3: x = 0 Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", 0);
	printf("\n----func----\n");
	ft_printf("%hhx", 0);
	printf("|");

	printf("\n\nCase4: x = INT_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%hhx", INT_MAX);
	printf("|");

	printf("\n\nCase5: x =  INT_MIN Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%hhx", INT_MIN);
	printf("|");

	printf("\n\nCase7: x =  UINT_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%hhx", UINT_MAX);
	printf("|");

	printf("\n\nCase8: x =  LONG_MIN Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%hhx", LONG_MIN);
	printf("|");

	printf("\n\nCase8: x =  LONG_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hhx", LONG_MAX);
	printf("|");

	printf("\n\nCase8: x =  ULONG_MAX Flag hh\n");
	printf("\n----real----\n");
	printf("%hhx|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hhx", ULONG_MAX);
	printf("|");



	return (0);
}

