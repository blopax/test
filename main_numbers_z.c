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

/*	format = "% 8.4dalors %zdautremaillon%schaine_finale";
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
//	format = "%zo";
//	ft_printf(format, 10);
//	ft_putstr("\n\n");

	printf("\n\n\nFLAG Z_____________________________________FLAG Z\n");
//TEST BASE 10
	printf("\nTEST ON d  FLAG Z_________________\n");
	printf("\n\nCase1: d > 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", 15);
	printf("\n----func----\n");
	ft_printf("%zd", 15);
	printf("|");

	printf("\n\nCase2: d < 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", -15);
	printf("\n----func----\n");
	ft_printf("%zd", -15);
	printf("|");

	printf("\n\nCase3: d = 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", 0);
	printf("\n----func----\n");
	ft_printf("%zd", 0);
	printf("|");

	printf("\n\nCase4: d = INT_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%zd", INT_MAX);
	printf("|");

	printf("\n\nCase5: d =  INT_MIN Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%zd", INT_MIN);
	printf("|");

	printf("\n\nCase7: d =  UINT_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%zd", UINT_MAX);
	printf("|");

	printf("\n\nCase8: d =  LONG_MIN Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%zd", LONG_MIN);
	printf("|");

	printf("\n\nCase8: d =  LONG_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%zd", LONG_MAX);
	printf("|");

	printf("\n\nCase8: d =  ULONG_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zd|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%zd", ULONG_MAX);
	printf("|");


//TEST BASE 8

	printf("\n\n\nTEST ON o  FLAG Z_________________\n");
	printf("\n\nCase1: o > 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", 15);
	printf("\n----func----\n");
	ft_printf("%zo", 15);
	printf("|");

	printf("\n\nCase2: o < 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", -15);
	printf("\n----func----\n");
	ft_printf("%zo", -15);
	printf("|");

	printf("\n\nCase3: o = 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", 0);
	printf("\n----func----\n");
	ft_printf("%zo", 0);
	printf("|");

	printf("\n\nCase4: o = INT_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%zo", INT_MAX);
	printf("|");

	printf("\n\nCase5: o =  INT_MIN Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%zo", INT_MIN);
	printf("|");

	printf("\n\nCase7: o =  UINT_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%zo", UINT_MAX);
	printf("|");

	printf("\n\nCase8: o =  LONG_MIN Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%zo", LONG_MIN);
	printf("|");

	printf("\n\nCase8: o =  LONG_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%zo", LONG_MAX);
	printf("|");

	printf("\n\nCase8: o =  ULONG_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zo|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%zo", ULONG_MAX);
	printf("|");



//TEST BASE 16 x
	printf("\n\n\nTEST ON x  FLAG Z_________________\n");
	printf("\n\nCase1: x > 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", 25);
	printf("\n----func----\n");
	ft_printf("%zx", 25);
	printf("|");

	printf("\n\nCase2: x < 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", -15);
	printf("\n----func----\n");
	ft_printf("%zx", -15);
	printf("|");

	printf("\n\nCase3: x = 0 Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", 0);
	printf("\n----func----\n");
	ft_printf("%zx", 0);
	printf("|");

	printf("\n\nCase4: x = INT_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", INT_MAX);
	printf("\n----func----\n");
	ft_printf("%zx", INT_MAX);
	printf("|");

	printf("\n\nCase5: x =  INT_MIN Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", INT_MIN);
	printf("\n----func----\n");
	ft_printf("%zx", INT_MIN);
	printf("|");

	printf("\n\nCase7: x =  UINT_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", UINT_MAX);
	printf("\n----func----\n");
	ft_printf("%zx", UINT_MAX);
	printf("|");

	printf("\n\nCase8: x =  LONG_MIN Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", LONG_MIN);
	printf("\n----func----\n");
	ft_printf("%zx", LONG_MIN);
	printf("|");

	printf("\n\nCase8: x =  LONG_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", LONG_MAX);
	printf("\n----func----\n");
	ft_printf("%zx", LONG_MAX);
	printf("|");

	printf("\n\nCase8: x =  ULONG_MAX Flag z\n");
	printf("\n----real----\n");
	printf("%zx|", ULONG_MAX);
	printf("\n----func----\n");
	ft_printf("%zx", ULONG_MAX);
	printf("|");



	return (0);
}

