/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:44:22 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/07 17:49:59 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbru(unsigned int nb)
{
	char	c;
	int		i;

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		i++;
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
		i++;
	}
	if (nb > 9)
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	return (i);
}