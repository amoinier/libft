/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:54:57 by amoinier          #+#    #+#             */
/*   Updated: 2015/11/28 17:16:58 by amoinier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_val(int n)
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

static	int	ft_power(int nb, int power)
{
	int i;
	int tmp;

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

void		ft_putnbr(int n)
{
	int	j;
	int	i;
	int	power;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	i = 0;
	j = 0;
	if (n < 0)
	{
		ft_putchar('-');
		i++;
		n = n * (-1);
	}
	while (j < ft_val(n))
	{
		power = ft_val(n) - j - 1;
		ft_putchar(48 + (n / (ft_power(10, power)) % 10));
		j++;
	}
}
