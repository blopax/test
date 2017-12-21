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
//	format = "%o";
//	ft_printf(format, 10);
//	ft_putstr("\n\n");

	printf("\n\n\nNO FLAGS_____________________________________NO FLAGS\n");
//TEST BASE 10
	printf("\nTEST ON d  NO FLAGS_________________\n");
	printf("\n\nCase1: d > 0 No Flags\n");
	printf("\n----real----\n");
	printf("%d|", 15);
	printf("\n----func----\n");
	ft_printf("%d", 15);
	printf("|");

	printf("\n\nCase2: d < 0 No Flags\n");
	printf("\n----real----\n");
	printf("%d|", -15);
	printf("\n----func----\n");
	ft_printf("%d", -15);
	printf("|");

	printf("\n\nCase3: d = 0 No Flags\n");
	printf("\n----real----\n");
	printf("%.42d|", -1221786802);
	printf("\n----func----\n");
	ft_printf("%.42d", -1221786802);
	printf("|");
/*
	printf("\n\nCase4: d = INT_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%d|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%d", INT_MAX);
	printf("|");

	printf("\n\nCase5: d =  INT_MIN No Flags\n");
	printf("\n----real----\n");
	printf("%d|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%d", INT_MIN);
	printf("|");

	printf("\n\nCase7: d =  UINT_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%d|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%d", UINT_MAX);
	printf("|");

	printf("\n\nCase8: d =  LONG_MIN No Flags\n");
	printf("\n----real----\n");
	printf("%d|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%d", LONG_MIN);
	printf("|");

	printf("\n\nCase8: d =  LONG_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%d|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%d", LONG_MAX);
	printf("|");

	printf("\n\nCase8: d =  ULONG_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%d|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%d", ULONG_MAX);
	printf("|");


//TEST BASE 8

	printf("\n\n\nTEST ON o  NO FLAGS_________________\n");
	printf("\n\nCase1: o > 0 No Flags\n");
	printf("\n----real----\n");
	printf("%o|", 15);
	printf("\n----func----\n");
	ft_printf("%o", 15);
	printf("|");

	printf("\n\nCase2: o < 0 No Flags\n");
	printf("\n----real----\n");
	printf("%o|", -15);
	printf("\n----func----\n");
	ft_printf("%o", -15);
	printf("|");

	printf("\n\nCase3: o = 0 No Flags\n");
	printf("\n----real----\n");
	printf("%o|", 0);
	printf("\n----func----\n");
	ft_printf("%o", 0);
	printf("|");

	printf("\n\nCase4: o = INT_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%o|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%o", INT_MAX);
	printf("|");

	printf("\n\nCase5: o =  INT_MIN No Flags\n");
	printf("\n----real----\n");
	printf("%o|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%o", INT_MIN);
	printf("|");

	printf("\n\nCase7: o =  UINT_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%o|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%o", UINT_MAX);
	printf("|");

	printf("\n\nCase8: o =  LONG_MIN No Flags\n");
	printf("\n----real----\n");
	printf("%o|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%o", LONG_MIN);
	printf("|");

	printf("\n\nCase8: o =  LONG_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%o|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%o", LONG_MAX);
	printf("|");

	printf("\n\nCase8: o =  ULONG_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%o|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%o", ULONG_MAX);
	printf("|");



//TEST BASE 16 x
	printf("\n\n\nTEST ON x  NO FLAGS_________________\n");
	printf("\n\nCase1: x > 0 No Flags\n");
	printf("\n----real----\n");
	printf("%x|", 25);
	printf("\n----func----\n");
	ft_printf("%llx", 25);
	printf("|");

	printf("\n\nCase2: x < 0 No Flags\n");
	printf("\n----real----\n");
	printf("%x|", -15);
	printf("\n----func----\n");
	ft_printf("%x", -15);
	printf("|");

	printf("\n\nCase3: x = 0 No Flags\n");
	printf("\n----real----\n");
	printf("%x|", 0);
	printf("\n----func----\n");
	ft_printf("%x", 0);
	printf("|");

	printf("\n\nCase4: x = INT_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%x|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%x", INT_MAX);
	printf("|");

	printf("\n\nCase5: x =  INT_MIN No Flags\n");
	printf("\n----real----\n");
	printf("%x|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%x", INT_MIN);
	printf("|");

	printf("\n\nCase7: x =  UINT_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%x|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%x", UINT_MAX);
	printf("|");

	printf("\n\nCase8: x =  LONG_MIN No Flags\n");
	printf("\n----real----\n");
	printf("%x|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%x", LONG_MIN);
	printf("|");

	printf("\n\nCase8: x =  LONG_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%x|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%x", LONG_MAX);
	printf("|");

	printf("\n\nCase8: x =  ULONG_MAX No Flags\n");
	printf("\n----real----\n");
	printf("%x|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%x", ULONG_MAX);
	printf("|");
*/


	return (0);
}

