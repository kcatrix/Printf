/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:33:04 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/08 10:13:21 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *arg, ...)
{
	int		i;
	int		len;
	va_list	ap;

	len = 0;
	i = 0;
	va_start(ap, arg);
	while (arg[i])
	{	
		if (arg[i] == '%' && arg[i + 1] != '%')
			len += ft_convert((char)arg[i++ + 1], va_arg(ap, void *));
		else if (arg[i] == '%' && arg[i++ + 1] == '%')
		{
			write(1, "%", 1);
			len++;
		}
		else
		{
			ft_putchar(arg[i]);
			len++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
