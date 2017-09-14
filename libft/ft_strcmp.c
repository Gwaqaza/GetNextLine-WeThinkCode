/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 16:14:19 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/10 16:34:41 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (dst[i] != '\0' && dst[i] == src[i])
		i++;
	return ((const unsigned char)dst[i] - (const unsigned char)src[i]);
}
