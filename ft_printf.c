/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:33:04 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/06 20:22:14 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *arg, ...)
{
	int 	i;
	int 	len;
	va_list ap;
	
	len = 0;
	i = 0;
	va_start(ap, arg);
	while (arg[i])
	{	
		if (arg[i] == '%' && arg[i + 1] != '%')
		{
			len += ft_convert((char)arg[i + 1], va_arg(ap, void *));
			i++;
		}
		else if (arg[i] == '%' && arg[i + 1] == '%')
		{
			i++;
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
	printf("%c\n", arg[i]);
	printf("%d\n", len);
	va_end(ap);
	return (len);
}

