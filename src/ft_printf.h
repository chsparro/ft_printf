#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h> // DELETE!
#include <ctype.h> // DELETE!
#include <stdlib.h> // DELETE!
#define MAX_BUF (sizeof(long int) * 8)

typedef struct s_flags
{
	int minus; // -
	int zero; // 0

	int width; // 0 - 9
	int precision; // .
} t_flags;


void	ft_output(char spec, va_list ap);
int		ft_printf(char *format, ...);
char	*ft_strchr(char *str, char ch);
void	ft_putstr(char *str);
void	ft_printnum(long int num, int base);
void	ft_parse_modifiers(char *format, va_list ap, t_flags *flags);
#endif
