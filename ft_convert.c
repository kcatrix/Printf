/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 09:13:26 by kcatrix           #+#    #+#             */
/*   Updated: 2021/11/06 20:15:07 by kevyn            ###   ########.fr       */
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
		write(1, "p", 1);
	if ((int)arg == 'd')
		i += ft_putnbr((long)param);
	if ((int)arg == 'i')
		write(1, "i", 1);
	if ((int)arg == 'u')
		write(1, "u", 1);
	if ((int)arg == 'x')
		write(1, "x", 1);
	return (i);
}
