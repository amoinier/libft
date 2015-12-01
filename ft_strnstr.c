/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:00:28 by amoinier          #+#    #+#             */
/*   Updated: 2015/11/28 19:18:53 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return (char *)(s1);
	while (i < n)
	{
		while (s1[i] != s2[0])
		{
			i++;
			if (i >= n || s1[i] == 0)
				return (NULL);
		}
		while (s1[i + j] == s2[j] && s2[j] != '\0' && (i + j) <= n)
		{
			j++;
		}
		if (j == ft_strlen(s2))
			return (char *)(&s1[i]);
		i++;
	}
	return (NULL);
}
