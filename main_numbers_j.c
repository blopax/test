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

/*	format = "% 8.4dalors %jdautremaillon%schaine_finale";
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
//	format = "%jo";
//	ft_printf(format, 10);
//	ft_putstr("\n\n");

	printf("\n\n\nFLAG J_____________________________________FLAG J\n");
//TEST BASE 10
	printf("\nTEST ON d  FLAG J_________________\n");
	printf("\n\nCase1: d > 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", 15);
	printf("\n----func----\n");
	ft_printf("%jd", 15);
	printf("|");

	printf("\n\nCase2: d < 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", -15);
	printf("\n----func----\n");
	ft_printf("%jd", -15);
	printf("|");

	printf("\n\nCase3: d = 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", 0);
	printf("\n----func----\n");
	ft_printf("%jd", 0);
	printf("|");

	printf("\n\nCase4: d = INT_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%jd", INT_MAX);
	printf("|");

	printf("\n\nCase5: d =  INT_MIN Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%jd", INT_MIN);
	printf("|");

	printf("\n\nCase7: d =  UINT_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%jd", UINT_MAX);
	printf("|");

	printf("\n\nCase8: d =  LONG_MIN Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%jd", LONG_MIN);
	printf("|");

	printf("\n\nCase8: d =  LONG_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%jd", LONG_MAX);
	printf("|");

	printf("\n\nCase8: d =  ULONG_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jd|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%jd", ULONG_MAX);
	printf("|");


//TEST BASE 8

	printf("\n\n\nTEST ON o  FLAG J_________________\n");
	printf("\n\nCase1: o > 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", 15);
	printf("\n----func----\n");
	ft_printf("%jo", 15);
	printf("|");

	printf("\n\nCase2: o < 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", -15);
	printf("\n----func----\n");
	ft_printf("%jo", -15);
	printf("|");

	printf("\n\nCase3: o = 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", 0);
	printf("\n----func----\n");
	ft_printf("%jo", 0);
	printf("|");

	printf("\n\nCase4: o = INT_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%jo", INT_MAX);
	printf("|");

	printf("\n\nCase5: o =  INT_MIN Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%jo", INT_MIN);
	printf("|");

	printf("\n\nCase7: o =  UINT_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%jo", UINT_MAX);
	printf("|");

	printf("\n\nCase8: o =  LONG_MIN Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%jo", LONG_MIN);
	printf("|");

	printf("\n\nCase8: o =  LONG_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%jo", LONG_MAX);
	printf("|");

	printf("\n\nCase8: o =  ULONG_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jo|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%jo", ULONG_MAX);
	printf("|");



//TEST BASE 16 x
	printf("\n\n\nTEST ON x  FLAG J_________________\n");
	printf("\n\nCase1: x > 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", 25);
	printf("\n----func----\n");
	ft_printf("%jx", 25);
	printf("|");

	printf("\n\nCase2: x < 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", -15);
	printf("\n----func----\n");
	ft_printf("%jx", -15);
	printf("|");

	printf("\n\nCase3: x = 0 Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", 0);
	printf("\n----func----\n");
	ft_printf("%jx", 0);
	printf("|");

	printf("\n\nCase4: x = INT_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%jx", INT_MAX);
	printf("|");

	printf("\n\nCase5: x =  INT_MIN Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%jx", INT_MIN);
	printf("|");

	printf("\n\nCase7: x =  UINT_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%jx", UINT_MAX);
	printf("|");

	printf("\n\nCase8: x =  LONG_MIN Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%jx", LONG_MIN);
	printf("|");

	printf("\n\nCase8: x =  LONG_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%jx", LONG_MAX);
	printf("|");

	printf("\n\nCase8: x =  ULONG_MAX Flag j\n");
	printf("\n----real----\n");
	printf("%jx|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%jx", ULONG_MAX);
	printf("|");



	return (0);
}

