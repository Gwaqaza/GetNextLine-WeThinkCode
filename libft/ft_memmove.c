/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 16:32:21 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/10 16:27:33 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	operation;
	size_t	pos;
	size_t	end;

	if (dst != src)
	{
		if (dst < src)
		{
			operation = 1;
			pos = 0;
			end = len;
		}
		else
		{
			operation = -1;
			pos = len - 1;
			end = -1;
		}
		while (pos != end)
		{
			((unsigned char*)dst)[pos] = ((unsigned char*)src)[pos];
			pos = pos + operation;
		}
	}
	return (dst);
}
