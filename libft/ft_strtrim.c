/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 16:37:29 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/11 14:12:40 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*temp;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (!(temp = (char *)malloc(sizeof(*temp) * (ft_strlen(s) + 1))))
		return (NULL);
	temp = ft_strdup(s);
	while (temp[i] == ' ' || temp[i] == '\t' || temp[i] == '\n')
		i++;
	temp = ft_strcpy(temp, temp + i);
	i = ft_strlen(temp) - 1;
	while ((temp[i] == ' ' || temp[i] == '\n' || temp[i] == '\t') && i >= 0)
	{
		temp[i] = '\0';
		i--;
	}
	res = ft_strdup(temp);
	free(temp);
	return (res);
}
