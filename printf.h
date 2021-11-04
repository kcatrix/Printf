#ifndef PRINTF_H
# define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

typedef struct s_list t_list;

struct	s_list
{
	int			CountChar;
};

int	ft_printf(const char *, ...);

#endif