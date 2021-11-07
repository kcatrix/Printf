/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevyn <kevyn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:14:01 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/07 18:16:36 by kevyn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

//typedef struct s_list t_list;

//struct	s_list
//{
//	int			CountChar;
//};

int				ft_printf(const char *arg, ...);
int				ft_convert(char arg, void *param);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnbr(int nb);
unsigned int	ft_putnbru(unsigned int nb);
int				ft_putnbrh(int nb);

#endif