/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsparro <chsparro@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:26:36 by chsparro          #+#    #+#             */
/*   Updated: 2020/07/09 17:23:08 by chsparro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void ft_printf(char *format)
{
	int i;

	i = 0;
	while (!(format[i] == '\0'))
	{
		write(1, &format[i], 1);
		i++;
	}
}
int main(void)
{
	ft_printf("123");
	return (0);
}
