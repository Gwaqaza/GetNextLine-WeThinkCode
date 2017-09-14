/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 13:45:32 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/11 13:57:41 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str1;
	char *str2;
	char *strc;

	str1 = (char *)s1;
	str2 = (char *)s2;
	strc = (char *)malloc(sizeof((*strc) * (ft_strlen(s1) +
					ft_strlen(s2) + 1)));
	if (!str1 || !str2)
		return (NULL);
	if (!strc)
		return (NULL);
	else
		strc = ft_strcat(ft_strdup(str1), str2);
	return (strc);
}
