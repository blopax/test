/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_clean_flag_mofo.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvergnac <nvergnac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 18:21:44 by nvergnac          #+#    #+#             */
/*   Updated: 2017/12/21 17:59:43 by nvergnac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_add_char(t_lst *first, char c)
{
	char *tmp;
	int i;

	i = 0;
	//write(1,"ADD\n",4);
	//ft_putstr(first->init_str);
	//write(1,"\n",1);
	//ft_putnbr((int)ft_strlen(first->init_str));
	//write(1,"\n",1);
	if (!(tmp = ft_strnew((int)ft_strlen(first->init_str) + 1)))
		exit (0);
	tmp[0] = c;
	while (first->init_str[i])
	{
		tmp[i + 1] = first->init_str[i];
		i++;
	}
	free(first->init_str);
	if (!(first->init_str = ft_strdup(tmp)))
		exit (0);
	free(tmp);
	//write(1,"ADD\n",4);
	//ft_putstr(first->init_str);
	//write(1,"\n",1);
}

void	ft_fill_char(t_lst *first, char c, int neg, int real_size)
{
	char *tmp;
	char *str;
	int i;
	int k;

	i = 0;
	k = 0;
	if (!(tmp = ft_strnew(ft_atoi(first->size) + real_size)))
		exit (0);
	if (!(str = ft_strdup(first->init_str)))
		exit (0);
	//ft_putstr(str);
	//write(1,"\n",1);
	//ft_putnbr(ft_atoi(first->size));
	//write(1,"\n",1);
	//ft_putnbr((int)ft_strlen(str));
	//write(1,"\n",1);
	while (i < (ft_atoi(first->size) - (int)ft_strlen(str) - neg + real_size))
	{
		//write(1,"a\n",2);
		tmp[i++] = c;
	}
	//write(1,"2\n",2);
	while (i < ft_atoi(first->size) + real_size)
		tmp[i++] = str[k++];
	free(first->init_str);
	//ft_putstr(tmp);
	//write(1,"\n",1);
	if (!(first->init_str = ft_strdup(tmp)))
		exit (0);
	free(tmp);
	free(str);
	//ft_putstr(first->init_str);
	//write(1,"\n",1);
}

void	ft_left_justif(t_lst *first, int real_size)
{
	char *str;
	int i;

	i = 0;
	if (!(str = ft_strnew(ft_atoi(first->size) + real_size)))
		exit (0);
	while (first->init_str[i])
	{
		str[i] = first->init_str[i];
		i++;
	}
	while (i < ft_atoi(first->size) + real_size)
		str[i++] = ' ';
	free(first->init_str);
	if (!(first->init_str = ft_strdup(str)))
		exit (0);
	free(str);
}

void	ft_clean_flag_suc(t_lst *first, int real_size)
{
	int i;

	i = 0;
	while (first->flags[i])
	{
		if (first->flags[i] == '0' && first->acc == 0 && (ft_atoi(first->size) > (int)ft_strlen(first->init_str)))
			ft_fill_char(first, '0', 0, 0);
		if (first->flags[i] == '-' && (ft_atoi(first->size) + real_size > (int)ft_strlen(first->init_str)))
			ft_left_justif(first, real_size);
		i++;
	}
}

int		ft_remove_neg_sign(t_lst *first)
{
	char	*tmp;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!(tmp = ft_strnew((int)ft_strlen(first->init_str) - 1)))
		exit (0);
	while (first->init_str[i])
	{
		if (first->init_str[i] == '-')
			i++;
		else
		{
			tmp[k] = first->init_str[i];
			//write(1,&tmp[k],1);
			i++;
			k++;
		}
	}
	free(first->init_str);
	if (!(first->init_str = ft_strdup(tmp)))
		exit (0);
	free(tmp);
	return (1);
}

void	ft_clean_flag_d(t_lst *first, int real_size)
{
	int i;
	int neg;

	neg = 0;
	i = 0;
	if (first->init_str[0] ==  '-')
		neg = ft_remove_neg_sign(first);
		while (first->flags[i])
	{
		if (first->flags[i] == '0' && !first->acc && (ft_atoi(first->size) > ((int)ft_strlen(first->init_str) + neg)))
			ft_fill_char(first, '0', neg, 0);
		if (first->flags[i] == ' ' && neg == 0)
			ft_add_char(first, ' ');
		if (first->flags[i] == '+' && neg == 0)
			ft_add_char(first, '+');
		if (neg == 1 && first->init_str[0] != '-')
			{
				ft_add_char(first, '-');
			}
		if (first->flags[i] == '-' && (ft_atoi(first->size) + real_size > (int)ft_strlen(first->init_str)))
			ft_left_justif(first, real_size);
		i++;
	}
}

void	ft_clean_flag_o(t_lst *first, int real_size)
{
	int i;

	i = 0;
	while (first->flags[i])
	{
		if (first->flags[i] == '0' && first->acc == 0 && (ft_atoi(first->size) > (int)ft_strlen(first->init_str)))
			ft_fill_char(first, '0', 0, 0);
		if (first->flags[i] == '#')
			ft_add_char(first, '0');
		if (first->flags[i] == '-' && (ft_atoi(first->size) + real_size > (int)ft_strlen(first->init_str)))
			ft_left_justif(first, real_size);
		i++;
	}
}

void	ft_clean_flag_x(t_lst *first, int real_size)
{
	int i;

	i = 0;
	while (first->flags[i])
	{
		if (first->flags[i] == '0' && first->acc == 0 && (ft_atoi(first->size) > (int)ft_strlen(first->init_str)))
			ft_fill_char(first, '0', 0, 0);
		if (first->flags[i] == '#')
		{
			if (first->type == 'X')
				ft_add_char(first, 'X');
			else	
				ft_add_char(first, 'x');
			ft_add_char(first, '0');
		}
		if (first->flags[i] == '-' && (ft_atoi(first->size) + real_size > (int)ft_strlen(first->init_str)))
			ft_left_justif(first, real_size);
		i++;
	}
}

char	*ft_fill_flag(char a, char *flag)
{
	int i;

	i = 0;
	while (flag[i] != 0)
		i++;
	if (a == ' ' && flag[i - 1] == '+')
		return (flag);
	if (a == '-' && flag [i - 1] == '0')
	{
		flag[i - 1] = '-';
		return (flag);
	}
	flag[i] = a;
	return (flag);
}

void	ft_clean_flag(t_lst *first)
{
	const char *ref;
	char *flag;
	int i;

	flag = ft_strnew(6);
	ref = "0#-+ '";
	while (*ref != 0)
	{
		i = 0;
		while (first->flags[i])
		{
			if (first->flags[i] == *ref)
			{
				flag = ft_fill_flag(*ref, flag);
				break ;
			}
			i++;
		}
		ref++;
	}
	free(first->flags);
	first->flags = ft_strdup(flag);
	free(flag);
}

int		ft_check_flag(t_lst *first)
{
	int i;

	i = 0;
	while(first->flags[i])
	{
		if (first->flags[i] == '+' && first->init_str[0] != '-' && first->type == 'd')
			return (1);
		if (first->flags[i] == ' ' && first->init_str[0] != '-' && first->type == 'd')
			return (1);
		if (first->flags[i] == '#' && first->type == 'o')
			return (1);
		if (first->flags[i] == '#' && first->type == 'x')
			return (1);
		i++;
	}
	return (0);
}

int		ft_adjust_size(t_lst *first)
{
	int size;
	
	size = 0;
	if (first->size)
		size = ft_atoi(first->size);
	else
		return (0);
	if (first->type == 'x')
	{
	if (size > (int)ft_strlen(first->init_str) && ft_check_flag(first) == 1 )
		{
			free(first->size);
			first->size = ft_itoa(size - 2);
			return (2);
		}
	}
	else
	{
	if (size > (int)ft_strlen(first->init_str) && ft_check_flag(first) == 1 )
		{
			free(first->size);
			first->size = ft_itoa(size - 1);
			return (1);
		}
	}
	return (0);
}

void	ft_get_clean_flag(t_lst *first)
{
	int real_size;

	while (first)
	{
		real_size = 0;
		//write(1,"ALLO\n",5);
		if (first->flags)
		{
			write(1,"INIT\n",5);
			ft_putstr(first->init_str);
			write(1,"\n",1);
			//write(1,"TEST\n",5);
			ft_clean_flag(first);
			real_size = ft_adjust_size(first);
			//write(1,"TEST\n",5);
			//write(1,"FLAG\n",5);
			//ft_putstr(first->flags);
			//write(1,"\n",1);
			//write(1,"SIZE\n",5);
			//ft_putstr(first->size);
			//write(1,"\n",1);
			if (first->type == 's' || first->type == 'u' || first->type == 'c')
				ft_clean_flag_suc(first, real_size);
			if (first->type == 'd')
				ft_clean_flag_d(first,real_size);
			if (first->type == 'o')
			{
				//write(1,"1234\n",5);
				ft_clean_flag_o(first, real_size);
				//write(1,"1234\n",5);
			}
			if (first->type == 'x' || first->type == 'X')
				ft_clean_flag_x(first, real_size);
		}
		//write(1,"AAAA\n",5);
		//ft_putstr(first->init_str);
		//write(1,"\n",1);
		//ft_putnbr(real_size + ft_atoi(first->size));
		//write(1,"\n",1);
		//ft_putnbr((int)ft_strlen(first->init_str));
		//write(1,"\n",1);
		//write(1,"AAAA\n",5);
		if ((!first->flags && first->size) || (real_size + ft_atoi(first->size)) > (int)ft_strlen(first->init_str))
		{
			if (ft_atoi(first->size) + real_size > (int)ft_strlen(first->init_str))
				ft_fill_char(first, ' ', 0, real_size);
		}
		first = first->next;
	}
}
/*
   char	*ft_clean_flag(char *first)
   {
   const char *ref;
   char *flag;
   int i;

   flag = ft_strnew(6);
   ref = "#0-+ '";
   while (*ref != 0)
   {
   printf("%c\n",*ref);
   i = 0;
   while (first[i] != 0)
   {
   if (first[i] == *ref)
   {
   flag = ft_fill_flag(*ref, flag);
   break ;
   }
   i++;
   }
   ref++;
   }
   return (flag);
   }

   int main(void)
   {
   printf("flag :\t|%s|\n", ft_clean_flag("###00000   #   '## ++ - +++ 000 '#   +-"));
   printf("flag :\t|%s|\n", ft_clean_flag(" + 00000   #   '## ++  +++ 000 '#   +"));
   printf("flag :\t|%s|\n", ft_clean_flag(" 00000   #   '## - 000 '#-"));
   printf("flag :\t|%s|\n", ft_clean_flag("  00000   #   '## 000 '#   "));
   printf("flag :\t|%s|\n", ft_clean_flag(" 00000   # +  '##  000 '#"));
   return (0);
   }
   */
