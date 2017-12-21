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

/*	format = "% 8.4dalors %ldautremaillon%schaine_finale";
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
//	format = "%lo";
//	ft_printf(format, 10);
//	ft_putstr("\n\n");

	printf("\n\n\nFLAG L_____________________________________FLAG L\n");
//TEST BASE 10
	printf("\nTEST ON d  FLAG L_________________\n");
	printf("\n\nCase1: d > 0 Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", 15);
	printf("\n----func----\n");
	ft_printf("%ld", 15);
	printf("|");

	printf("\n\nCase2: d < 0 Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", -15);
	printf("\n----func----\n");
	ft_printf("%ld", -15);
	printf("|");

	printf("\n\nCase3: d = 0 Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", 0);
	printf("\n----func----\n");
	ft_printf("%ld", 0);
	printf("|");

	printf("\n\nCase4: d = INT_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%ld", INT_MAX);
	printf("|");

	printf("\n\nCase5: d =  INT_MIN Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%ld", INT_MIN);
	printf("|");

	printf("\n\nCase7: d =  UINT_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%ld", UINT_MAX);
	printf("|");

	printf("\n\nCase8: d =  LONG_MIN Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%ld", LONG_MIN);
	printf("|");

	printf("\n\nCase8: d =  LONG_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%ld", LONG_MAX);
	printf("|");

	printf("\n\nCase8: d =  ULONG_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%ld|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%ld", ULONG_MAX);
	printf("|");


//TEST BASE 8

	printf("\n\n\nTEST ON o  FLAG L_________________\n");
	printf("\n\nCase1: o > 0 Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", 15);
	printf("\n----func----\n");
	ft_printf("%lo", 15);
	printf("|");

	printf("\n\nCase2: o < 0 Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", -15);
	printf("\n----func----\n");
	ft_printf("%lo", -15);
	printf("|");

	printf("\n\nCase3: o = 0 Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", 0);
	printf("\n----func----\n");
	ft_printf("%lo", 0);
	printf("|");

	printf("\n\nCase4: o = INT_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%lo", INT_MAX);
	printf("|");

	printf("\n\nCase5: o =  INT_MIN Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%lo", INT_MIN);
	printf("|");

	printf("\n\nCase7: o =  UINT_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%lo", UINT_MAX);
	printf("|");

	printf("\n\nCase8: o =  LONG_MIN Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%lo", LONG_MIN);
	printf("|");

	printf("\n\nCase8: o =  LONG_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%lo", LONG_MAX);
	printf("|");

	printf("\n\nCase8: o =  ULONG_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%lo|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%lo", ULONG_MAX);
	printf("|");



//TEST BASE 16 x
	printf("\n\n\nTEST ON x  FLAG L_________________\n");
	printf("\n\nCase1: x > 0 Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", 25);
	printf("\n----func----\n");
	ft_printf("%lx", 25);
	printf("|");

	printf("\n\nCase2: x < 0 Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", -15);
	printf("\n----func----\n");
	ft_printf("%lx", -15);
	printf("|");

	printf("\n\nCase3: x = 0 Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", 0);
	printf("\n----func----\n");
	ft_printf("%lx", 0);
	printf("|");

	printf("\n\nCase4: x = INT_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%lx", INT_MAX);
	printf("|");

	printf("\n\nCase5: x =  INT_MIN Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%lx", INT_MIN);
	printf("|");

	printf("\n\nCase7: x =  UINT_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%lx", UINT_MAX);
	printf("|");

	printf("\n\nCase8: x =  LONG_MIN Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%lx", LONG_MIN);
	printf("|");

	printf("\n\nCase8: x =  LONG_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%lx", LONG_MAX);
	printf("|");

	printf("\n\nCase8: x =  ULONG_MAX Flag l\n");
	printf("\n----real----\n");
	printf("%lx|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%lx", ULONG_MAX);
	printf("|");


	return (0);
}

