/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:13:26 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/08 11:12:15 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(char arg, void *param)
{
	int i;
	
	i = 0;
	if ((int)arg == 'c')
		i += ft_putchar((char)param);
	if ((int)arg == 's')
		i += ft_putstr(param);
	if ((int)arg == 'p')
	{
		write(1, "0x", 2);
		i += 2;
		i += ft_putnbrh((unsigned long int)param, "0123456789abcdef");
	}
	if ((int)arg == 'd')
		i += ft_putnbr((long)param);
	if ((int)arg == 'i')
		i += ft_putnbr((long)param);
	if ((int)arg == 'u')
		i += ft_putnbru((unsigned int)param);
	if ((int)arg == 'x')
		i += ft_putnbrhl((unsigned int)param, "0123456789abcdef");
	if ((int)arg == 'X')
		i += ft_putnbrhl((unsigned int)param, "0123456789ABCDEF");
	return (i);
}
