/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:33:04 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/04 15:27:43 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *arg, ...)
{
	int i;
	va_list ap;
	t_list *s_list;
	
	va_start(ap, arg);
	printf("%lu", strlen(arg));
	va_end(ap);
}
int main(int argc, char **argv)
{
	argc = 1;
	ft_printf(*argv);
}
