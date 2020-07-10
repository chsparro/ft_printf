/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsparro <chsparro@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:22:54 by chsparro          #+#    #+#             */
/*   Updated: 2020/07/10 13:54:54 by chsparro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_printf(char *format)
{
	int i;

	i = 0;
	while (!(format[i] == '\0'))
	{
		if (format[i] != '%')
			write(1, &format[i], 1);
		else
		{
			
		}
		i++;
	}
}

int		main(void)
{
	ft_printf("12345");
	return (0);
}

