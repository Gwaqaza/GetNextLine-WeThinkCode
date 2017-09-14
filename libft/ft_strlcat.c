/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 17:47:26 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/11 14:21:09 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	n;

	n = ft_strlen(dst);
	i = n;
	d = 0;
	if (size < n)
		return (ft_strlen(src) + size);
	if (size == n)
		return (ft_strlen(src) + n);
	while (src[d] && d < size - n - 1)
	{
		dst[i] = src[d];
		i++;
		d++;
	}
	dst[i] = '\0';
	return (n + ft_strlen(src));
}
