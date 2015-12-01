/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:11:53 by amoinier          #+#    #+#             */
/*   Updated: 2015/11/27 11:58:29 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zmem;
	char	*tmp;
	size_t	i;

	zmem = (void *)malloc(sizeof(zmem) * size);
	if (zmem == NULL)
		return (NULL);
	i = 0;
	tmp = zmem;
	while (i <= size)
	{
		tmp[i] = 0;
		i++;
	}
	return (zmem);
}
