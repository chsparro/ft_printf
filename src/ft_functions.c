#include "ft_printf.h"

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
