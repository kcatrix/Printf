/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:33:04 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/04 16:41:42 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *arg, ...)
{
	int i;
	va_list ap;
	t_list *s_list;
	//char	*s;

	//s = arg;	
	i = 0;
	va_start(ap, arg);
	while (arg[i])
	{	
		if (arg[i] == '%')
			i++;
	}
	printf("%c\n", arg[i]);
	va_end(ap);
}
int main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_printf(argv[i]);
}
