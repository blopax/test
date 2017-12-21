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

/*	format = "% 8.4dalors %lldautremaillon%schaine_finale";
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
//	format = "%llo";
//	ft_printf(format, 10);
//	ft_putstr("\n\n");

	printf("\n\n\nFLAG LL_____________________________________FLAG LL\n");
//TEST BASE 10
	printf("\nTEST ON d  FLAG LL_________________\n");
	printf("\n\nCase1: d > 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", 15);
	printf("\n----func----\n");
	ft_printf("%lld", 15);
	printf("|");

	printf("\n\nCase2: d < 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", -15);
	printf("\n----func----\n");
	ft_printf("%lld", -15);
	printf("|");

	printf("\n\nCase3: d = 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", 0);
	printf("\n----func----\n");
	ft_printf("%lld", 0);
	printf("|");

	printf("\n\nCase4: d = INT_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%lld", INT_MAX);
	printf("|");

	printf("\n\nCase5: d =  INT_MIN Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%lld", INT_MIN);
	printf("|");

	printf("\n\nCase7: d =  UINT_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%lld", UINT_MAX);
	printf("|");

	printf("\n\nCase8: d =  LONG_MIN Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%lld", LONG_MIN);
	printf("|");

	printf("\n\nCase8: d =  LONG_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%lld", LONG_MAX);
	printf("|");

	printf("\n\nCase8: d =  ULONG_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%lld|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%lld", ULONG_MAX);
	printf("|");


//TEST BASE 8

	printf("\n\n\nTEST ON o  FLAG LL_________________\n");
	printf("\n\nCase1: o > 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", 15);
	printf("\n----func----\n");
	ft_printf("%llo", 15);
	printf("|");

	printf("\n\nCase2: o < 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", -15);
	printf("\n----func----\n");
	ft_printf("%llo", -15);
	printf("|");

	printf("\n\nCase3: o = 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", 0);
	printf("\n----func----\n");
	ft_printf("%llo", 0);
	printf("|");

	printf("\n\nCase4: o = INT_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%llo", INT_MAX);
	printf("|");

	printf("\n\nCase5: o =  INT_MIN Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%llo", INT_MIN);
	printf("|");

	printf("\n\nCase7: o =  UINT_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%llo", UINT_MAX);
	printf("|");

	printf("\n\nCase8: o =  LONG_MIN Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%llo", LONG_MIN);
	printf("|");

	printf("\n\nCase8: o =  LONG_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%llo", LONG_MAX);
	printf("|");

	printf("\n\nCase8: o =  ULONG_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%llo|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%llo", ULONG_MAX);
	printf("|");



//TEST BASE 16 x
	printf("\n\n\nTEST ON x  FLAG LL_________________\n");
	printf("\n\nCase1: x > 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", 25);
	printf("\n----func----\n");
	ft_printf("%llx", 25);
	printf("|");

	printf("\n\nCase2: x < 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", -15);
	printf("\n----func----\n");
	ft_printf("%llx", -15);
	printf("|");

	printf("\n\nCase3: x = 0 Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", 0);
	printf("\n----func----\n");
	ft_printf("%llx", 0);
	printf("|");

	printf("\n\nCase4: x = INT_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%llx", INT_MAX);
	printf("|");

	printf("\n\nCase5: x =  INT_MIN Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%llx", INT_MIN);
	printf("|");

	printf("\n\nCase7: x =  UINT_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%llx", UINT_MAX);
	printf("|");

	printf("\n\nCase8: x =  LONG_MIN Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%llx", LONG_MIN);
	printf("|");

	printf("\n\nCase8: x =  LONG_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%llx", LONG_MAX);
	printf("|");

	printf("\n\nCase8: x =  ULONG_MAX Flag ll\n");
	printf("\n----real----\n");
	printf("%llx|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%llx", ULONG_MAX);
	printf("|");


	return (0);
}

