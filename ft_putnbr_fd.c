/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoinier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:24:22 by amoinier          #+#    #+#             */
/*   Updated: 2015/11/28 17:15:25 by amoinier         ###   ########.fr       */
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

void		ft_putnbr_fd(int n, int fd)
{
	int	j;
	int	i;
	int	power;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	i = 0;
	j = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i++;
		n = n * (-1);
	}
	while (j < ft_val(n))
	{
		power = ft_val(n) - j - 1;
		ft_putchar_fd(48 + (n / (ft_power(10, power)) % 10), fd);
		j++;
	}
}