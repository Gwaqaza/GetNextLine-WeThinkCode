/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:02:04 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/10 16:50:15 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int			i1;
	size_t		i2;

	if (ft_strlen(little) == 0)
		return ((char*)big);
	i1 = 0;
	while (big[i1] != '\0')
	{
		i2 = 0;
		while (little[i2] != '\0' && big[i1 + i2]
				!= '\0' && little[i2] == big[i1 + i2])
			i2++;
		if (i2 == ft_strlen(little))
			return (&(((char*)(big))[i1]));
		i1++;
	}
	return (NULL);
}
