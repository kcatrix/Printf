/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcatrix <kcatrix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:14:01 by kevyn             #+#    #+#             */
/*   Updated: 2021/11/08 11:12:50 by kcatrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

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
unsigned int	ft_putnbrh(unsigned long int nb, char	*base);
unsigned int	ft_putnbrhl(unsigned int nb, char	*base);

#endif