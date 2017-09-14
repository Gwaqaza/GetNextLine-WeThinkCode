/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 14:39:53 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/10 17:03:55 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(const char *s)
{
	char	*str;
	size_t	len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		str[i++] = s[len - 1];
		len--;
	}
	return (str);
}

static char	*return_empty(char **result)
{
	ft_strdel(result);
	return (ft_strdup(""));
}

static char	*return_0(char **result)
{
	ft_strdel(result);
	return (ft_strdup("0"));
}

static char	*return_final(char **result)
{
	char	*tmp2;

	tmp2 = ft_strrev(*result);
	ft_strdel(result);
	return (tmp2);
}

char		*ft_itoa_base(int n, int base)
{
	char			*rep;
	char			*result;
	long int		num;
	int				i;

	rep = "0123456789ABCDEF";
	result = ft_strnew(65);
	num = n;
	i = 0;
	if (base < 2 || base > 16)
		return (return_empty(&result));
	if (num < 0)
		num *= -1;
	if (result == NULL)
		return (NULL);
	if (num == 0)
		return (return_0(&result));
	while (num != 0)
	{
		result[i++] = rep[num % base];
		num /= base;
	}
	if (n < 0)
		result[i] = '-';
	return (return_final(&result));
}
