/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:35:49 by amoinier          #+#    #+#             */
/*   Updated: 2015/12/02 14:35:11 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dst[i])
		i++;
	if (size == i)
		return (size + ft_strlen(src));
	j = 0;
	while (size > (i + j + 1) && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (size == (i + j + 1))
	{
		while (src[j])
			j++;
	}
	return (i + j);
}
