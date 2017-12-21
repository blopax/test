#include <stdio.h>
#include <stdlib.h>
#include "libft/includes/libft.h"
#include "ft_printf.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*str;
//	int		nb;
	intmax_t test;
//	int		size;

	str = 0;
	i = 1;
	test = (intmax_t)&i;
	while (i < argc)
	{
		printf("%s", argv[i]);
		i++;
	}

//	nb = -30;
/*
	printf("LIST OF CONVERSIONS WITHOUT FLAGS, ACCURACY AND FIELD MIN SIZE \n\n");
	i = 0;
	size = 26;
	if (!(str = (char *)malloc(sizeof(char) *(size + 1))))
		return (-1);
	while (i < size)
	{
		str[i] = 'A' + i;
		i++;
	}
	str[i] = 0;

	printf("%d\n", printf("%d", 30));
	printf("Gestion sans conversion avec double\\ pour echapper:\t\tSalut ca va\n");
	printf("Gestion sans conversion avec double%%:\t\t37,5%%\n");
	printf("gestion de s ac parametre str:\t\t%s\n", str);
	printf("gestion de s avec chaine statique:\t\t%s\n", "chaine statique");
//	printf("gestion de S avec parametre str:\t\t%S\n", str);
	printf("gestion de p avec adresse str:\t\t%p\n\n", &str);
	
	nb = 30;
	printf("gestion de d avec nb:%0+2d\n", nb*10);
	printf("gestion de d avec -nb:\t\t%-+d\n", -nb);
	printf("gestion de D avec -1 en dur:\t%D\n", -1);
	printf("gestion de D avec nb en dur:\t%D\n", nb);
	printf("gestion de i avec nb:\t\t%i\n", nb);
	printf("gestion de i avec -nb:\t\t%i\n", -nb);
	printf("gestion de o avec nb:\t\t%o\n", nb);
	printf("gestion de o avec -nb:\t\t%o\n", -nb);
	printf("gestion de O avec nb:\t\t%O\n", nb);
	printf("gestion de O avec -nb:\t\t%O\n", -nb);
	printf("gestion de u avec nb:\t\t%u\n", nb);
	printf("gestion de u avec -nb:\t\t%u\n", -nb);
	printf("gestion de U avec nb:\t\t%U\n", nb);
	printf("gestion de U avec -nb:\t\t%U\n", -nb);
	printf("gestion de x avec nb:\t\t%x\n", nb);
	printf("gestion de x avec -nb:\t\t%x\n", -nb);
	printf("gestion de X avec nb:\t\t%X\n", nb);
	printf("gestion de X avec -nb:\t\t%X\n", -nb);
	printf("gestion de c avec 48:\t\t%c\n", 48);
	printf("gestion de c avec -200:\t\t%c\n", -200);
	printf("gestion de C avec 48:\t\t%C\n", 48);
	printf("gestion de C avec -200:\t\t%C\n", 200);
*/
//	printf("gestion de s avec nb:\t\t%s\n", nb);

//	printf("pointeur =%p\n pointeur =%lld\n\n", &nb, (long long int)&nb);
//	printf("adresse avec %%p : \t\t%p\n", &i);
//	printf("adresse avec itoa_base : \t%s\n", ft_itoa_base(test, 16));
//	printf("|%x|\n", 10001);

/*	printf("|%d|\n", -1);
	printf("|%u|\n", -1);
	printf("|%ju|\n", -1);
	printf("|%hhx|\n", -1);
	printf("|0.3d|%0.3d\n", 12);
	printf("|-5.3p|%-5.3d\n", 12);
	printf("|-20.3p|%-20.3p\n", &i);
	printf("|20p|\t%20p\n", &i);
	printf("|- 20p|\t%- 20p\n", &i);
	printf("|.0p|\t%.0p\n", &i);
	printf("|#p|\t%#p\n", &i);
	printf("|0p|\t%0p\n", &i);
	printf("|.0lx|\t%.0lx\n", &i);
	printf("|.0x|\t%.0lx\n", 0);
	printf("|#.0x|\t%#.0x\n", 0);
	printf("|#lx|\t%#lx\n", &i);
	printf("|0lx|\t%0lx\n", &i);
	printf("|#0lx|\t%#0lx\n", &i);
	printf("|#020X|\t%#020X\n", &i);
	printf("|020lx|\t%020lx\t\n", &i);
	printf("|020X|\t%020X\t\n", &i);
	printf("|020x|\t%020x\t\n", &i);
	printf("|X|\t%X\t\n", &i);
	printf("|x|%x\t\n", &i);
	printf("|4d|%4d\n", 12);
	printf("| 4d|% 4d\n", 12);
	printf("|+4d|%+4d\n", 12);
	printf("|3d|%3d\n", 12);
	printf("| 3d|% 3d\n", 12);
	printf("|+3d|%+3d\n", 12);
	printf("| 2d|% 2d\n", 12);
	printf("|+2d|%+2d\n", 12);
	printf("| 1d|% 1d\n", 12);
	printf("|+1d|%+1d\n", 12);
	printf("|05.3d|%05.3d\n", 12);
	printf("| 5.3d|% 5.3d\n", 12);
	printf("|-s|%-s\n", "test");
	printf("|-.12s|%-.12s\n", "test");
	printf("|-.1|%-.1s\n", "test");
	printf("|012s|%012s\n", "test");
	printf("|#.1o|%#.1o\n", 100);
	printf("|#.6o|%#.6o\n", 100);
	printf("|.6o|%.6o\n", 100);
	printf("|0.6o|%0.6o\n", 100);
	printf("|06o|%06o\n", 100);
	printf("|6o|%6o\n", 100);
	printf("|0o|%0o\n", 100);
	printf("|#o|%#o\n", 100);
	printf("|#06o|%#06o\n", 100);
	printf("|#0o|%#0o\n", 100);
	printf("|#6o|%#6o\n", 100);
	printf("|.s|%.s\n", "allo");
	printf("|0 6d|%0 6d\n", 2);
	printf("|0+6d|%0+6d\n", 2);
	printf("| d|% d\n", 2);
	printf("| 1d|% 1d\n", 2);
	printf("|+.5d|%+.5d\n", 1);
	printf("| 04d|% 04d\n", 10000);
	printf("| -10d|% -10d\n", 10000);
	printf("| 04d|% --10d\n", 10000);
	printf("|--+--10d|%--+--10d\n", 10);*/
/*	printf("|- 5d|%- 5d\n", -10);
	printf("|0+5d|%0+5d\n", -10);
	printf("|-5d|%-5d\n", -10);
	printf("|0 5d|%0 5d\n", -10);
	printf("|- 4d|%- 4d\n", -10);
	printf("|0+4d|%0+4d\n", -10);
	printf("|-4d|%-4d\n", -10);
	printf("|0 4d|%0 4d\n", -10);
	printf("|- 3d|%- 3d\n", -10);
	printf("|0+3d|%0+3d\n", -10);
	printf("|-3d|%-3d\n", -10);
	printf("|0 3d|%0 3d\n", -10);
	printf("|-10.2s|%-10.2s\n", str);
	printf("|-5s|%-5s\n", str);
	printf("|5s|%5s\n", "\0 11abcds/0einwfeiun");
	printf("|5s|%5s\n", "\111");
	printf("|#-5o|%#-5o\n", 10);*/
	printf("+04o\t|% 04o|\n", 1000);
	printf("+06d\t|%+06d|\n", 1000);
	printf("+06d\t|%+06d|\n", -1000);
	printf("#06o\t|%#06o|\n", 1000);
	printf("#06o\t|%#06o|\n", -1000);
	printf("+6d\t|%+6d|\n", 1000);
	printf("+6d\t|%06d|\n", -1000);
	printf("#6o\t|%#6o|\n", 1000);
	printf("#6o\t|%#6o|\n", -1000);
	printf("04o\t|%04o|\n", 1000);
	printf("04o\t|%04o|\n", -1000);
	printf("04d\t|%04d|\n", 1000);
	printf("04d\t|%04d|\n", -1000);
/*	printf("|#05x|%#05x\n", 1000);
	printf("|#08x|%#08x\n", 1000);*/
	printf("\n");
	printf("# 06d\t|%# 06d|\n", 1000);
	printf("#-06d\t|%#-06d|\n", 1000);
	printf("#-6d\t|%#-6d|\n", 1000);
	printf("#- 6d\t|%#- 6d|\n", 1000);
	printf(" 1d\t|%# 1d|\n", 1);
	printf("\n");
	
	printf("#-06x\t|%#-06x|\n", 1000);
	printf("#-3x\t|%#-3x|\n", 1000);
	printf("#- 6x\t|%# 6x|\n", 1000);
	printf("#- 6x\t|%#-6x|\n", 1000);
	printf("#0 6x\t|%#0 6x|\n", 1000);
	printf("\n");
	
	printf("#-06o\t|%#-06o|\n", 1000);
	printf("#-3o\t|%#-3o|\n", 1000);
	printf("#-0 6o\t|%#-0 6o|\n", 1000);
	printf("#0 6o\t|%#0 6o|\n", 1000);
	printf("\n");
	

	printf("#0 6o\t|%#0 6o|\n", 1000);
	


	return (0);
}

