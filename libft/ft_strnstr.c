/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:48:55 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/10 16:47:50 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len2;

	i = 0;
	len2 = ft_strlen(little);
	if (len2 == 0)
		return ((char*)big);
	while (big[i] && len2 <= len--)
	{
		if (ft_memcmp(big + i, little, len2) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
