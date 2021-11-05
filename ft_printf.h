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

int		ft_printf(const char *arg, ...);
int		ft_convert(char arg, void *);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);

#endif