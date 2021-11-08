/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrh.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:55:32 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/08 13:34:28 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbrh(unsigned long int nb, char	*base)
{
	char	c;
	int		i;

	i = 0;
	if (nb >= 0 && nb <= 15)
	{
		c = nb + '0';
		write(1, &base[nb], 1);
		i++;
	}
	if (nb > 15)
	{
		i += ft_putnbrh(nb / 16, base);
		i += ft_putnbrh(nb % 16, base);
	}
	return (i);
}
