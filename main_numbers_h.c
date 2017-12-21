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

/*	format = "% 8.4dalors %hdautremaillon%schaine_finale";
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
//	format = "%ho";
//	ft_printf(format, 10);
//	ft_putstr("\n\n");

	printf("\n\n\nFLAG H_____________________________________FLAG H\n");
//TEST BASE 10
	printf("\nTEST ON d  FLAG H_________________\n");
	printf("\n\nCase1: d > 0 Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", 15);
	printf("\n----func----\n");
	ft_printf("%hd", 15);
	printf("|");

	printf("\n\nCase2: d < 0 Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", -15);
	printf("\n----func----\n");
	ft_printf("%hd", -15);
	printf("|");

	printf("\n\nCase3: d = 0 Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", 0);
	printf("\n----func----\n");
	ft_printf("%hd", 0);
	printf("|");

	printf("\n\nCase4: d = INT_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%hd", INT_MAX);
	printf("|");

	printf("\n\nCase5: d =  INT_MIN Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%hd", INT_MIN);
	printf("|");

	printf("\n\nCase7: d =  UINT_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%hd", UINT_MAX);
	printf("|");

	printf("\n\nCase8: d =  LONG_MIN Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%hd", LONG_MIN);
	printf("|");

	printf("\n\nCase8: d =  LONG_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hd", LONG_MAX);
	printf("|");

	printf("\n\nCase8: d =  ULONG_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%hd|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hd", ULONG_MAX);
	printf("|");


//TEST BASE 8

	printf("\n\n\nTEST ON o  FLAG H_________________\n");
	printf("\n\nCase1: o > 0 Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", 15);
	printf("\n----func----\n");
	ft_printf("%ho", 15);
	printf("|");

	printf("\n\nCase2: o < 0 Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", -15);
	printf("\n----func----\n");
	ft_printf("%ho", -15);
	printf("|");

	printf("\n\nCase3: o = 0 Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", 0);
	printf("\n----func----\n");
	ft_printf("%ho", 0);
	printf("|");

	printf("\n\nCase4: o = INT_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%ho", INT_MAX);
	printf("|");

	printf("\n\nCase5: o =  INT_MIN Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%ho", INT_MIN);
	printf("|");

	printf("\n\nCase7: o =  UINT_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%ho", UINT_MAX);
	printf("|");

	printf("\n\nCase8: o =  LONG_MIN Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%ho", LONG_MIN);
	printf("|");

	printf("\n\nCase8: o =  LONG_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%ho", LONG_MAX);
	printf("|");

	printf("\n\nCase8: o =  ULONG_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%ho|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%ho", ULONG_MAX);
	printf("|");



//TEST BASE 16 x
	printf("\n\n\nTEST ON x  FLAG H_________________\n");
	printf("\n\nCase1: x > 0 Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", 25);
	printf("\n----func----\n");
	ft_printf("%hx", 25);
	printf("|");

	printf("\n\nCase2: x < 0 Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", -15);
	printf("\n----func----\n");
	ft_printf("%hx", -15);
	printf("|");

	printf("\n\nCase3: x = 0 Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", 0);
	printf("\n----func----\n");
	ft_printf("%hx", 0);
	printf("|");

	printf("\n\nCase4: x = INT_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%hx", INT_MAX);
	printf("|");

	printf("\n\nCase5: x =  INT_MIN Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%hx", INT_MIN);
	printf("|");

	printf("\n\nCase7: x =  UINT_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%hx", UINT_MAX);
	printf("|");

	printf("\n\nCase8: x =  LONG_MIN Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%hx", LONG_MIN);
	printf("|");

	printf("\n\nCase8: x =  LONG_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hx", LONG_MAX);
	printf("|");

	printf("\n\nCase8: x =  ULONG_MAX Flag h\n");
	printf("\n----real----\n");
	printf("%hx|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%hx", ULONG_MAX);
	printf("|");



	return (0);
}

