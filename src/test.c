#include <stdio.h>
#include "ft_printf.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_printnum(long int num, int base)
{
	long int number;
	char *dig;
	char buf[MAX_BUF];
	char *ptr;

	ptr = &buf[MAX_BUF - 1];
	number = (long int)num;
	dig = "0123456789abcdef";
	*ptr-- = dig[number % base];
	number = number / base;
	while (number != 0)
	{
		*ptr-- = dig[number % base];
		number = number / base;
	}
	while (++ptr != &buf[MAX_BUF])
		write(1, ptr, 1);
}

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

char	*ft_strchr(char *str, char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return (str);
		str++;
	}
	return (0);
}

int main(void)
{
	char p = 'c';
	//ft_printf("123%d789%sfgt\n", 0, "abcd");
	//ft_printnum((long int)&p, 16);
	//write(1, "\n", 1);
	printf("%5.d\n", 120);
	return (0);
}
