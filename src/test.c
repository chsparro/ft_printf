#include <stdio.h>
#include "ft_printf.h"
#include "ft_printf.c"
#include "ft_functions.c"

int eq_struct_flags(t_flags *exp, t_flags *act)
{
	if ((exp->minus == act->minus) &&
		(exp->precision == act->precision) &&
		(exp->width == act->width) &&
		(exp->zero == act->zero)
		)
		return (1);
	return (0);
		
}

void init_flag(t_flags *flag, int minus, int precision, int width, int zero)
{
	flag->minus = minus;
	flag->precision = precision;
	flag->width = width;
	flag->zero = zero;
}

int main(void)
{
	t_flags exp;
	t_flags act;

	init_flag(&exp, 1, 2, 3, 4);
	init_flag(&act, 1, 2, 3, 0);
	printf("%d\n", eq_struct_flags(&exp, &act));
	/* ft_printf("123%d789%sfgt\n", 0, "abcd"); */
	/* printf("%1d\n", 12); */
	return (0);
}
