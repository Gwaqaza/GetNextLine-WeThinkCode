/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 08:16:24 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/11 14:04:58 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (dst[i] != '\0' && (dst[i] == src[i]) && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)dst[i] - (unsigned char)src[i]);
}
