/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:09:01 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/08 13:34:58 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbrhl(unsigned int nb, char	*base)
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
		i += ft_putnbrhl(nb / 16, base);
		i += ft_putnbrhl(nb % 16, base);
	}
	return (i);
}
