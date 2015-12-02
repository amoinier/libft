/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:35:49 by amoinier          #+#    #+#             */
/*   Updated: 2015/12/01 20:14:41 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (size < len)
		return (ft_strlen(src) + size);
	while (i < size - len)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len - 1] = '\0';
	return (ft_strlen(src) + len);
}
