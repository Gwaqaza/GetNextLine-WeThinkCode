/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 17:10:01 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/10 16:24:56 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	t;

	i = 0;
	str = (unsigned char*)s;
	t = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == t)
			return ((void*)&s[i]);
		i++;
	}
	return (NULL);
}
