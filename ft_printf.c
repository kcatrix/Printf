/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:33:04 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/05 16:39:11 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *arg, ...)
{
	int i;
	int len;
	va_list ap;
	char	*param;
	
	len = 0;
	i = 0;
	va_start(ap, arg);
	param = va_arg(ap, void *);
	if (!arg)
		write (1, "(null)", 6);
	while (arg[i])
	{	
		if (arg[i] == '%' && arg[i + 1] != '%')
		{
			len += ft_convert((char)arg[i + 1], param);
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

