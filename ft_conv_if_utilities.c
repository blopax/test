/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_utilities.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclement <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 16:43:08 by pclement          #+#    #+#             */
/*   Updated: 2017/12/20 17:06:05 by pclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_chk_spec_mdf(char *format, int st, char mdf_str, t_info *info)
{
	if (format[st] == mdf_str && (mdf_str == 'h' || mdf_str == 'l'))
	{
		if (format[st + 1] == mdf_str)
		{
			free(info->mdf);
			info->mdf = ft_strnew(2);
			info->mdf[0] = mdf_str;
			info->mdf[1] = mdf_str;
			return (2);
		}
		else
		{
			free(info->mdf);
			info->mdf = ft_strnew(1);
			info->mdf[0] = mdf_str;
			return (1);
		}
	}
	return (0);
}

char	*ft_append_acc_char(char format, int k, char *tmp)
{
	char	*buf;

	buf = ft_strdup(tmp);
	free(tmp);
	if (!(tmp = ft_strnew(ft_strlen(buf) + 1)))
		exit(0);
	ft_strcpy(tmp, buf);
	free(buf);
	tmp[k] = format;
	return (tmp);
}

char	*ft_append_size_char(char format, int k, char *tmp)
{
	char	*buf;

	buf = ft_strdup(tmp);
	free(tmp);
	if (!(tmp = ft_strnew(ft_strlen(buf) + 1)))
		exit(0);
	ft_strcpy(tmp, buf);
	free(buf);
	tmp[k] = format;
	return (tmp);
}

char	*ft_apd_flg_chr(char format, t_flag flag)
{
	char	*buf;

	if (flag.k == 0)
	{
		if (!(flag.tmp = ft_strnew(1)))
			exit(0);
	}
	buf = ft_strdup(flag.tmp);
	free(flag.tmp);
	if (!(flag.tmp = ft_strnew(ft_strlen(buf) + 1)))
		exit(0);
	ft_strcpy(flag.tmp, buf);
	free(buf);
	flag.tmp[flag.k] = format;
	return (flag.tmp);
}
