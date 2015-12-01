/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:52:46 by amoinier          #+#    #+#             */
/*   Updated: 2015/12/01 17:19:55 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_val(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	int		ft_power(int nb, int power)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 1;
	if (power > 0)
	{
		while (i < power)
		{
			tmp = tmp * nb;
			i++;
		}
		return (tmp);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}

char			*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*tab;
	int		power;

	i = 0;
	j = 0;
	tab = (char*)malloc(sizeof(*tab) * (ft_val(n) + 1));
	if (!tab)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(tab, "-2147483648"));
	if (n < 0)
	{
		tab[0] = '-';
		i++;
		n = n * (-1);
	}
	while (j < ft_val(n))
	{
		power = ft_val(n) - (j++) - 1;
		tab[i++] = 48 + (n / (ft_power(10, power)) % 10);
	}
	tab[i] = '\0';
	return (tab);
}