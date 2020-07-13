#include <stdio.h>
#include "ft_printf.h"

void ft_parse_modifiers

void	ft_output(char spec, va_list ap)
{
	if ((spec == 'd') || (spec == 'i'))
		ft_printnum(va_arg(ap, int), 10);
	if (spec == 's')
		ft_putstr(va_arg(ap, char *));
}

int		ft_printf(char *format, ...)
{
	va_list ap;
	int i;
	int pos;

	i = 0;
	pos = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
			ft_output(format[++i], ap);
		i++;
	}
	// printf("%s\n", va_arg(ap, char *));
	va_end(ap);
	return (0);
}

